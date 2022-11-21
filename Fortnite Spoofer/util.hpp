#pragma once
#include "exported.hpp"
#include "fnv.hpp"
#include <tuple>
#include <random>s

namespace serializer
{
	// thanks to namazso
	static inline bool is_good_char( char c )
	{
		const auto u = uint8_t( c );
		return ( u >= uint8_t( '0' ) && u <= uint8_t( '9' ) )
			|| ( u >= uint8_t( 'A' ) && u <= uint8_t( 'Z' ) )
			|| ( u >= uint8_t( 'a' ) && u <= uint8_t( 'z' ) );
	}
	static inline bool is_hex( char c )s
	{
		const auto u = uint8_t( c );
		return ( u >= uint8_t( '0' ) && u <= uint8_t( '9' ) )
			|| ( u >= uint8_t( 'A' ) && u <= uint8_t( 'F' ) )
			|| ( u >= uint8_t( 'a' ) && u <= uint8_t( 'f' ) );
	}
	static inline uint8_t unhex_char( char c )
	{
		const auto u = uint8_t( c );
		if ( u >= uint8_t( '0' ) && u <= uint8_t( '9' ) )
			return u - uint8_t( '0' );
		if ( u >= uint8_t( 'A' ) && u <= uint8_t( 'F' ) )
			return u - uint8_t( 'A' ) + 0xA;
		if ( u >= uint8_t( 'a' ) && u <= uint8_t( 'f' ) )
			return u - uint8_t( 'a' ) + 0xa;
		return 0xFF;
	}
	static inline uint8_t unhex_byte( char a, char b ) { return ( unhex_char( a ) << 4 ) + unhex_char( b ); }
	static inline char hex_char( uint8_t v )
	{
		if ( v < 0xA )
			return char( uint8_t( '0' ) + v );
		return char( uint8_t( 'A' ) + v - 0xA );
	}
	static inline std::pair<char, char> hex_byte( uint8_t v ) { return { hex_char( v >> 4 ), hex_char( v & 0xF ) }; }

	static fnv::hash hash_subserial( const char* serial, size_t len )
	{
		auto h = fnv::hash_init( );
		for ( auto i = 0u; i < len; ++i )
			if ( is_good_char( serial[ i ] ) )
				h = fnv::hash_byte( h, serial[ i ] );
		return h;
	}

	void randomize_subserial( std::uintptr_t start, char* serial, size_t len )
	{
		const auto seed = hash_subserial( serial, len ) ^ start;
		auto engine = std::mt19937_64{ seed };
		const auto distribution = std::uniform_int_distribution<unsigned>( 'A', 'Z' );

		for ( auto i = 0u; i < len; ++i )
			if ( is_good_char( serial[ i ] ) )
				serial[ i ] = char( distribution( engine ) );

		// must be 20 or less
		size_t len;
		char buf[ 21 ];

		bool is_serial_hex = true;

		for ( len = 0; serial[ len ]; ++len )
			if ( !is_hex( serial[ len ] ) )
				is_serial_hex = false;

		if ( is_serial_hex )
		{
			len /= 2;
			len = std::min<size_t>( len, 20 );
			for ( auto i = 0u; i < len; ++i )
				buf[ i ] = unhex_byte( serial[ i * 2 ], serial[ i * 2 + 1 ] );
		}
		else
		{
			memcpy( buf, serial, len );
		}


		buf[ len ] = 0;
		char split[ 2 ][ 11 ];
		memset( split, 0, sizeof( split ) );

		for ( auto i = 0u; i < len; ++i )
			split[ i % 2 ][ i / 2 ] = buf[ i ];

		randomize_subserial( start, split[ 0 ], ( len + 1 ) / 2 );
		randomize_subserial( start, split[ 1 ], len / 2 );

		for ( auto i = 0u; i < len; ++i )
			buf[ i ] = split[ i % 2 ][ i / 2 ];
		buf[ len ] = 0;

		if ( is_serial_hex )
		{
			for ( auto i = 0u; i < len; ++i )
				std::tie( serial[ i * 2 ], serial[ i * 2 + 1 ] ) = hex_byte( buf[ i ] );
			serial[ len * 2 ] = 0;
		}
		else
		{
			memcpy( serial, buf, len + 1 );
		}
	}
}
