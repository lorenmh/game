#include <iostream>

#include "point.h"
#include "body.h"

int main(int argc, char *argv[]) {
	Body b1(-10.0,0.0,0.0,0.0,10.0,10.0);
	Body b2(10.0,0.0,0.0,0.0,10.0,10.0);

	Vec2 f1 = b1.gForce(b2);

	std::cout << f1.x << ", " << f1.y << '\n';

	b1.position += Vec2(19.0, 0);
	Vec2 f2 = b1.gForce(b2);

	std::cout << f2.x << ", " << f2.y << '\n';
}
