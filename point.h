#ifndef __POINT__DEF__
#define __POINT__DEF__
class Point {
	public:
		double x,y;
		// default constructor
		Point(double _x, double _y);
		double distance(const Point& other);
		// copy constructor
		//   Point(const Point& other);
		//   // copy assignment
		//   Point& operator=(const Point& other);
		//   // destructor
		//   ~Point();
};
#endif
