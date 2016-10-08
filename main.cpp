#include <iostream>

#include "point.h"
#include "body.h"

int main(int argc, char *argv[]) {
	Body b1(0.0,0.0,1.0,1.0,1.0,0.0);
	Body b2(0.0,0.0,1.0,1.0,1.0,0.0);
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
	Vec2 g1 = b1.gravity(b2);
	Vec2 g2 = b2.gravity(b1);
	std::cout << "g1: " << g1.x << ", " << g1.y << '\n';
	std::cout << "g2: " << g2.x << ", " << g2.y << '\n';
}
