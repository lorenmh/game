#include <cmath>

#include "body.h"

#define G 1

Body::Body(const Vec2& p, const Vec2& v, double m, double r)
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

// F=ma; a=F/m; dv=(F/m)*dt
//Vec2 Body::dv(const Vec2& force, double dt) {
//}

Vec2 Body::gForce(const Body& other) {
	Vec2 displacement = (Vec2)other.position - position;
	double distance = std::hypot(displacement.x, displacement.y);

	if (distance == 0.0) return Vec2(0.0,0.0);

	Vec2 unit = displacement / distance;
	double magnitude = (G*mass*other.mass)/(distance*distance);
	return unit * magnitude;
}
