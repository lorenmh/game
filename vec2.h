#ifndef __VEC2__DEF__
#define __VEC2__DEF__

class Vec2 {
	public:
		double x, y;
		Vec2(double, double);
		Vec2(const Vec2& other);
		Vec2& operator=(const Vec2& other);
};

#endif
