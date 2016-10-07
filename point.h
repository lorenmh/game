#ifndef __POINT__DEF__
#define __POINT__DEF__

#include "vec2.h"

class Point : public Vec2 {
	public:
		Point(double _x, double _y);

		Point(const Point& other);
		Point(const Vec2& other);
		Point& operator=(const Point& other);

		double distance(const Point& other);
		// copy constructor
		//   Point(const Point& other);
		//   // copy assignment
		//   Point& operator=(const Point& other);
		//   // destructor
		//   ~Point();
};
#endif
