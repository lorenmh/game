#ifndef __BODY__DEF__
#define __BODY__DEF__

#include "point.h"
#include "vec2.h"

class Body {
	public:
		Point position;
		Vec2 velocity;
		double mass;
		double radius;
		Body(const Point& p, const Vec2& v, double m, double r);
		Body(double x, double y, double vx, double vy, double m, double r);
};

#endif
