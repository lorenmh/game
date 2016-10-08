#include <iostream>

#include "point.h"
#include "body.h"

int main(int argc, char *argv[]) {
	Body b1(0.0,0.0,1.0,1.0,1.0,0.0);
	std::cout << b1.position.x << ", " << b1.position.y << '\n';
	b1.move(1.0);
	std::cout << b1.position.x << ", " << b1.position.y << '\n';
	b1.move(1.0);
	std::cout << b1.position.x << ", " << b1.position.y << '\n';
	b1.accelerate(Vec2(-1.0, 0.0), 1.0);
	b1.move(1.0);
	std::cout << b1.position.x << ", " << b1.position.y << '\n';
	b1.move(1.0);
	std::cout << b1.position.x << ", " << b1.position.y << '\n';
}
