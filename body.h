#ifndef __BODY__DEF__
#define __BODY__DEF__

#include "point.h"

class Body {
	public:
		Point p;
		double m;
		double r;
		Body(double x, double y, double m, double _r);
};

#endif
