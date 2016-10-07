#include <iostream>

#include "point.h"
#include "body.h"

int main(int argc, char *argv[]) {
	Point p(1.01,2.03);
	Point p2(0.99,10.0);
	Body b(2.0,3.0,4.0,5.0);

	std::cout << p.distance(p2) << '\n';
}
