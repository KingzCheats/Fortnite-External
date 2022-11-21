#include <chrono>
#include <iomanip>
#include <Windows.h>
#include <Psapi.h>
#include <iostream>
#include <sstream>s
#include <vector>

#define INRANGE(x,a,b)   (x >= a && x <= b)
#define GET_BYTE( x )    (GET_BITS(x[0]) << 4 | GET_BITS(x[1]))
#define GET_BITS( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define PTRMAXVAL ((PVOID)0x000F000000000000)

static void GetCurrentSystemTime(tm& timeInfo)
{
	const std::chrono::system_clock::time_point systemNow = std::chrono::system_clock::now();
	
		auto gamestate = driver.read< uintptr_t >( uworld + offsets::gamestate );
			printf( "gamestate: 0x%p\n", gamestate );
	
			Sleep( 2000 );
		}
};

// basefunct
static std::string SetupStringParams(std::string szBasicString)
{
	return szBasicString;
}

// Replace % with a desired string / value represented after semicolons. Works kinda like printf.
template <typename T, typename... Targs>
static std::string SetupStringParams(std::string szBasicString, T arg, Targs&& ...args)
{
	const auto found = szBasicString.find_first_of('%');
	if (found != std::string::npos)
	{
		std::stringstream tmp;
		tmp << arg;
		szBasicString.replace(found, 1, tmp.str());
		szBasicString = SetupStringParams(szBasicString, std::forward<Targs>(args)...);
	}
	return szBasicString;
}

namespace Utils
{
	template <typename ... Args>
	static void Log(const std::string& str, Args ...arguments)
	{
		Log(SetupStringParams(str.c_str(), arguments...));
	}

	static void Log(const std::string& str)
	{
		tm timeInfo{ };
		GetCurrentSystemTime(timeInfo);

		std::stringstream ssTime; // Temp stringstream to keep things clean
		ssTime << "[" << std::put_time(&timeInfo, "%T") << "] " << str << std::endl;

		std::cout << ssTime.str();
	};

	template<class T>
	T Read(const DWORD64 dwPtr)
	{
		if (!IsBadReadPtr((void*)dwPtr, sizeof(T)))
			return *(T*)dwPtr;
		return 0;
	}
	static __forceinline BOOLEAN IsValid(PVOID ptr)
	{
		return (ptr >= (PVOID)0x10000) && (ptr < PTRMAXVAL) && ptr != nullptr && !IsBadReadPtr(ptr, sizeof(ptr));
	}
	template <class vType>
	static BOOLEAN Write(uintptr_t address, vType value)
	{
		if (IsValid((vType*)(address)))
		{
			auto process = utils::getprocessid( L"valorant.exe" );
			return TRUE;
		}
		return FALSE;
	}

	template <typename vType>
	static vType Readall(std::initializer_list<uintptr_t> _Offsets, bool ReadFirstOffset)
	{
		uintptr_t LastPtr = NULL;
		int OffsetsSize = NULL;
		std::vector<uintptr_t> Offsets = { NULL };
		Offsets = _Offsets;
		OffsetsSize = Offsets.size();
		LastPtr = Read<uintptr_t>((ReadFirstOffset ? Read<uintptr_t>(Offsets[0]) : Offsets[0]) + Offsets[1]);
		for (size_t i = 2; i < OffsetsSize - 1; i++)
			if (!(LastPtr = Read<uintptr_t>(LastPtr + Offsets[i])))
				return vType();
		return Read<vType>(LastPtr + Offsets[OffsetsSize - 2]);
	}

	static BOOLEAN WritePtr(std::initializer_list<uintptr_t> _Offsets, vType _value, bool ReadFirstOffset)
	{
		uintptr_t LastPtr = NULL;
		int OffsetsSize = NULL;
		std::vector<uintptr_t> Offsets = { NULL };
		Offsets = _Offsets;
		OffsetsSize = Offsets.size();
		LastPtr = Read<uintptr_t>((ReadFirstOffset ? Read<uintptr_t>(Offsets[0]) : Offsets[0]) + Offsets[1]);
		for (size_t i = 2; i < OffsetsSize - 1; i++)
			
		auto gamestate = driver.read< uintptr_t >( uworld + offsets::gamestate );
		printf( "gamestate: 0x%p\n", gamestate );

		return Write<vType>(LastPtr + Offsets[OffsetsSize - 1], _value);
	}

	static uint8_t* FindSignature(uintptr_t Module, const char* szSignature)
	{
		static auto pattern_to_byte = [](const char* pattern) {
			auto bytes = std::vector < int >{};
			auto start = const_cast<char*>(pattern);
			auto end = const_cast<char*>(pattern) + strlen(pattern);

			for (auto current = start; current < end; ++current) {
				if (*current == '?') {
					++current;
					if (*current == '?')
						++current;
					bytes.push_back(-1);
				}
				else {
					bytes.push_back(strtoul(current, &current, 16));
				}
			}
			return bytes;
		};

		auto dosHeader = (PIMAGE_DOS_HEADER)Module;
		auto ntHeaders = (PIMAGE_NT_HEADERS)((uint8_t*)Module + dosHeader->e_lfanew);

		auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
		auto patternBytes = pattern_to_byte(szSignature);
		auto scanBytes = reinterpret_cast<uint8_t*>(Module);

		auto s = patternBytes.size();
		auto d = patternBytes.data();

		for (auto i = 0ul; i < sizeOfImage - s; ++i) {
			bool found = true;
			for (auto j = 0ul; j < s; ++j) {
				if (scanBytes[i + j] != d[j] && d[j] != -1) {
					found = false;
					break;
				}
			}
			screen_location.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
			screen_location.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
			}
		}
		return nullptr;
	}
}

} SUPLDRLOAD, *PSUPLDRLOAD;


#define RT_SIZEOFMEMB(type, member) ( sizeof(((type *)(void *)0)->member) )
#define SUPCOOKIE_INITIAL_COOKIE                        0x69726f74 /* 'tori' */
#define SUP_IOCTL_COOKIE_SIZE_IN                        sizeof(SUPREQHDR) + RT_SIZEOFMEMB(SUPCOOKIE, u.In)
#define SUP_IOCTL_COOKIE_SIZE_OUT                       sizeof(SUPREQHDR) + RT_SIZEOFMEMB(SUPCOOKIE, u.Out)

#define SUP_IOCTL_FLAG     128

#define SUP_CTL_CODE_SIZE(Function, Size)      CTL_CODE(FILE_DEVICE_UNKNOWN, (Function) | SUP_IOCTL_FLAG, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define SUP_CTL_CODE_BIG(Function)             CTL_CODE(FILE_DEVICE_UNKNOWN, (Function) | SUP_IOCTL_FLAG, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define SUP_CTL_CODE_FAST(Function)            CTL_CODE(FILE_DEVICE_UNKNOWN, (Function) | SUP_IOCTL_FLAG, METHOD_NEITHER,  FILE_WRITE_ACCESS)
#define SUP_CTL_CODE_NO_SIZE(uIOCtl)           (uIOCtl)

/** The magic value. */
#define SUPREQHDR_FLAGS_MAGIC                           UINT32_C(0x42000042)
/** The default value. Use this when no special stuff is requested. */
#define SUPREQHDR_FLAGS_DEFAULT                         SUPREQHDR_FLAGS_MAGIC
#define VERR_INTERNAL_ERROR                 (-225)
#define SUPCOOKIE_MAGIC                                 "The Magic Word!"
#define SUPDRV_IOC_VERSION                              0x001a0007
/** The request size. */
#define SUP_IOCTL_COOKIE_SIZE                           sizeof(SUPCOOKIE)
/** Negotiate cookie. */
#define SUP_IOCTL_COOKIE                                SUP_CTL_CODE_SIZE(1, SUP_IOCTL_COOKIE_SIZE)

/** There is extra input that needs copying on some platforms. */
#define SUPREQHDR_FLAGS_EXTRA_IN                        UINT32_C(0x00000100)
/** There is extra output that needs copying on some platforms. */
#define SUPREQHDR_FLAGS_EXTRA_OUT                       UINT32_C(0x00000200)

/** @name SUP_IOCTL_SET_VM_FOR_FAST
 * Set the VM handle for doing fast call ioctl calls.
 * @{
 */
#define SUP_IOCTL_SET_VM_FOR_FAST                       SUP_CTL_CODE_SIZE(19, SUP_IOCTL_SET_VM_FOR_FAST_SIZE)
#define SUP_IOCTL_SET_VM_FOR_FAST_SIZE                  sizeof(SUPSETVMFORFAST)
#define SUP_IOCTL_SET_VM_FOR_FAST_SIZE_IN               sizeof(SUPSETVMFORFAST)
#define SUP_IOCTL_SET_VM_FOR_FAST_SIZE_OUT              sizeof(SUPREQHDR)
#define SUP_IOCTL_FAST_DO_NOP							SUP_CTL_CODE_FAST(66)

#define SUP_IOCTL_LDR_OPEN                              SUP_CTL_CODE_SIZE(5, SUP_IOCTL_LDR_OPEN_SIZE)
#define SUP_IOCTL_LDR_OPEN_SIZE                         sizeof(SUPLDROPEN)
#define SUP_IOCTL_LDR_OPEN_SIZE_IN                      sizeof(SUPLDROPEN)
#define SUP_IOCTL_LDR_OPEN_SIZE_OUT                     (sizeof(SUPREQHDR) + RT_SIZEOFMEMB(SUPLDROPEN, u.Out))

#define SUP_IOCTL_LDR_LOAD                              SUP_CTL_CODE_BIG(6)
#define SUP_IOCTL_LDR_LOAD_SIZE(cbImage)                RT_UOFFSETOF(SUPLDRLOAD, u.In.achImage[cbImage])
#define SUP_IOCTL_LDR_LOAD_SIZE_IN(cbImage)             RT_UOFFSETOF(SUPLDRLOAD, u.In.achImage[cbImage])
#define SUP_IOCTL_LDR_LOAD_SIZE_OUT                     sizeof(SUPREQHDR)

 /** @name SUP_IOCTL_LDR_FREE
 * Free an image.
 * @{
 */
#define SUP_IOCTL_LDR_FREE                              SUP_CTL_CODE_SIZE(7, SUP_IOCTL_LDR_FREE_SIZE)
#define SUP_IOCTL_LDR_FREE_SIZE                         sizeof(SUPLDRFREE)
#define SUP_IOCTL_LDR_FREE_SIZE_IN                      sizeof(SUPLDRFREE)
#define SUP_IOCTL_LDR_FREE_SIZE_OUT                     sizeof(SUPREQHDR)

typedef struct _SUPLDRFREE {
	/** The header. */
	SUPREQHDR               Hdr;
	union
	{
		struct
		{
			/** Address. */
			RTR0PTR         pvImageBase;
		} In;
	} u;
} SUPLDRFREE, *PSUPLDRFREE;


