#ifndef __BODY__DEF__
#define __BODY__DEF__

#include "vec2.h"

class Body {
	public:
		Vec2 position;
		Vec2 velocity;
		double mass;
		double radius;
		Body(const Vec2& p, const Vec2& v, double m, double r);
		Body(double x, double y, double vx, double vy, double m, double r);

		Vec2 gravity(const Body& other);
};

#endif
