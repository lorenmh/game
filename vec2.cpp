#include <cmath>

#include "vec2.h"

Vec2::Vec2(double _x, double _y) {
	x = _x;
	y = _y;
}

Vec2::Vec2(const Vec2& other)
	: x(other.x)
	, y(other.y)
{}

double Vec2::magnitude() {
	return std::hypot(x,y);
}

Vec2 Vec2::unit() {
	double _magnitude = magnitude();
	return Vec2(x/_magnitude, y/_magnitude);
}

Vec2& Vec2::operator=(const Vec2& other) {
	x = other.x;
	y = other.y;
	return *this;
}

Vec2& Vec2::operator+=(const Vec2& other) {
	x += other.x;
	y += other.y;
	return *this;
}
Vec2& Vec2::operator+=(double scalar) {
	x += scalar;
	y += scalar;
	return *this;
}

Vec2 Vec2::operator*(double scalar) {
	return Vec2(x*scalar, y*scalar);
}
Vec2 Vec2::operator/(double scalar) {
	return Vec2(x/scalar, y/scalar);
}

Vec2 Vec2::operator+(double scalar) {
	return Vec2(x+scalar, y+scalar);
}
Vec2 Vec2::operator+(const Vec2& other) {
	return Vec2(x+other.x, y+other.y);
}

Vec2 Vec2::operator-(double scalar) {
	return Vec2(x-scalar, y-scalar);
}
Vec2 Vec2::operator-(const Vec2& other) {
	return Vec2(x-other.x, y-other.y);
}
