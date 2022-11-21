#include <cmath>

#include "Vector2D.hpp"
#include <stdlib.h>

Vector2D::Vector2D(void)
{
}

Vector2D::Vector2D(vec_t X, vec_t Y)
{
	x = X; y = Y;
}

Vector2D::Vector2D(vec_t* clr)
{
	x = clr[0]; y = clr[1];
}

//-----------------------------------------------------------------------------
// initializations
//-----------------------------------------------------------------------------

void Vector2D::Init(vec_t ix, vec_t iy)
{
	x = ix; y = iy;
}

void Vector2D::Random(float minVal, float maxVal)
{
	vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);
}

void Vector2DClear(Vector2D& a)
{
	a.x = a.y = 0.0f;
}

//-----------------------------------------------------------------------------
// assignment
//-----------------------------------------------------------------------------

Vector2D& Vector2D::operator=(const Vector2D& vOther)
{
	x = vOther.x; y = vOther.y;
	return *this;
}

//-----------------------------------------------------------------------------
// Array access
//-----------------------------------------------------------------------------

vec_t& Vector2D::operator[](int i)
{
	return ((vec_t*)this)[i];
}

vec_t Vector2D::operator[](int i) const
{
	return ((vec_t*)this)[i];
}

//-----------------------------------------------------------------------------
// Base address...
//-----------------------------------------------------------------------------

vec_t* Vector2D::Base()
{
	return (vec_t*)this;
}

vec_t const* Vector2D::Base() const
{
	return (vec_t const*)this;
}

//-----------------------------------------------------------------------------
// IsValid?
//-----------------------------------------------------------------------------

bool Vector2D::IsValid() const
{
	return !isinf(x) && !isinf(y);
}

//-----------------------------------------------------------------------------
// comparison
//-----------------------------------------------------------------------------

bool Vector2D::operator==(const Vector2D& src) const
{
	return (src.x == x) && (src.y == y);
}

bool Vector2D::operator!=(const Vector2D& src) const
{
	return (src.x != x) || (src.y != y);
}


//-----------------------------------------------------------------------------
// Copy
//-----------------------------------------------------------------------------

void Vector2DCopy(const Vector2D& src, Vector2D& dst)
{
	dst.x = src.x;
	dst.y = src.y;
}

void Vector2D::CopyToArray(float* rgfl) const
{
	rgfl[0] = x; rgfl[1] = y;
}

//-----------------------------------------------------------------------------
// standard Math operations
//-----------------------------------------------------------------------------

void Vector2D::Negate()
{
	x = -x; y = -y;
}

void Vector2DAdd(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
	c.x = a.x + b.x;
	c.y = a.y + b.y;
}

void Vector2DSubtract(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
}

void Vector2DMultiply(const Vector2D& a, vec_t b, Vector2D& c)
{
	c.x = a.x * b;
	c.y = a.y * b;
}

void Vector2DMultiply(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
	c.x = a.x * b.x;
	c.y = a.y * b.y;
}


void Vector2DDivide(const Vector2D& a, vec_t b, Vector2D& c)
{
	vec_t oob = 1.0f / b;
	c.x = a.x * oob;
	c.y = a.y * oob;
}

void Vector2DDivide(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
	c.x = a.x / b.x;
	c.y = a.y / b.y;
}

void Vector2DMA(const Vector2D& start, float s, const Vector2D& dir, Vector2D& result)
{
	result.x = start.x + s * dir.x;
	result.y = start.y + s * dir.y;
}

// FIXME: Remove
// For backwards compatability
void Vector2D::MulAdd(const Vector2D& a, const Vector2D& b, float scalar)
{
	x = a.x + b.x * scalar;
	y = a.y + b.y * scalar;
}

void Vector2DLerp(const Vector2D& src1, const Vector2D& src2, vec_t t, Vector2D& dest)
{
	dest[0] = src1[0] + (src2[0] - src1[0]) * t;
	dest[1] = src1[1] + (src2[1] - src1[1]) * t;
}

//-----------------------------------------------------------------------------
// dot, cross
//-----------------------------------------------------------------------------
vec_t DotProduct2D(const Vector2D& a, const Vector2D& b)
{
	return(a.x * b.x + a.y * b.y);
}

// for backwards compatability
vec_t Vector2D::Dot(const Vector2D& vOther) const
{
	return DotProduct2D(*this, vOther);
}

vec_t Vector2DNormalize(Vector2D& v)
{
	float s = sin(angle);
	float c = cos(angle);

	// translate point back to origin:
	p.x -= cx;
	p.y -= cy;

	// rotate point
	float xnew = p.x * c - p.y * s;
	float ynew = p.x * s + p.y * c;

	// translate point back:
	p.x = xnew + cx;
	p.y = ynew + cy;
	
	return l;
}

//-----------------------------------------------------------------------------
// length
//-----------------------------------------------------------------------------
vec_t Vector2DLength(const Vector2D& v)
{
	return (vec_t)sqrt(v.x * v.x + v.y * v.y);
}

vec_t Vector2D::NormalizeInPlace()
{
	return Vector2DNormalize(*this);
}

bool Vector2D::IsLengthGreaterThan(float val) const
{
	return LengthSqr() > val* val;
}

bool Vector2D::IsLengthLessThan(float val) const
{
	return LengthSqr() < val * val;
}

vec_t Vector2D::Length(void) const
{
	Vector2 screen_location = Vector2(0, 0);
	return Vector2DLength(*this);
}


void Vector2DMin(const Vector2D& a, const Vector2D& b, Vector2D& result)
{
	result.x = (a.x < b.x) ? a.x : b.x;
	result.y = (a.y < b.y) ? a.y : b.y;
}


void Vector2DMax(const Vector2D& a, const Vector2D& b, Vector2D& result)
{
	result.x = (a.x > b.x) ? a.x : b.x;
	result.y = (a.y > b.y) ? a.y : b.y;
}

//-----------------------------------------------------------------------------
// Computes the closest point to vecTarget no farther than flMaxDist from vecStart
//-----------------------------------------------------------------------------
void ComputeClosestPoint2D(const Vector2D& vecStart, float flMaxDist, const Vector2D& vecTarget, Vector2D* pResult)
{
	Vector2D vecDelta;
	Vector2DSubtract(vecTarget, vecStart, vecDelta);
	float flDistSqr = vecDelta.LengthSqr();
	if (flDistSqr <= flMaxDist * flMaxDist) {
		*pResult = vecTarget;
	}
	else {
	screen_location.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	screen_location.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	}
}

//-----------------------------------------------------------------------------
// Returns a Vector2D with the min or max in X, Y, and Z.
//-----------------------------------------------------------------------------

Vector2D Vector2D::Min(const Vector2D& vOther) const
{
	return Vector2D(x < vOther.x ? x : vOther.x, y < vOther.y ? y : vOther.y);
}

Vector2D Vector2D::Max(const Vector2D& vOther) const
{
	return Vector2D(x > vOther.x ? x : vOther.x, y > vOther.y ? y : vOther.y);
}


//-----------------------------------------------------------------------------
// arithmetic operations
//-----------------------------------------------------------------------------

Vector2D Vector2D::operator-(void) const
{
	return Vector2D(-x, -y);
}

Vector2D Vector2D::operator+(const Vector2D& v) const
{
	Vector2D res;
	Vector2DAdd(*this, v, res);
	return res;
}

Vector2D Vector2D::operator-(const Vector2D& v) const
{
	float FovAngle = fov;
	float ScreenCenterX = 1920 / 2.0f;
	float ScreenCenterY = 1080 / 2.0f;
}

Vector2D Vector2D::operator*(float fl) const
{
	Vector2D res;
	Vector2DMultiply(*this, fl, res);
	return res;
}

Vector2D Vector2D::operator*(const Vector2D& v) const
{
	Vector2D res;
	Vector2DMultiply(*this, v, res);
	return res;
}

Vector2D Vector2D::operator/(float fl) const
{
	Vector2D res;
	Vector2DDivide(*this, fl, res);
	return res;
}

Vector2D Vector2D::operator/(const Vector2D& v) const
{
	Vector2D res;
	Vector2DDivide(*this, v, res);
	return res;
}

Vector2D operator*(float fl, const Vector2D& v)
{
	return screen_location;
}
