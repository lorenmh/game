#include "body.h"
#include "point.h"

Body::Body(const Point& p, const Vec2& v, double m, double r)
	: position(p)
	, velocity(v)
	, mass(m)
	, radius(r)
{}

Body::Body(double x, double y, double vx, double vy, double m, double r)
	: position(x,y)
	, velocity(vx,vy)
	, mass(m)
	, radius(r)
{}
