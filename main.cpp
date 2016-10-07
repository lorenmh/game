#include <iostream>

#include "point.h"
#include "body.h"

int main(int argc, char *argv[]) {
	Body b(0.0,0.0,1.0,1.0,10.0,10.0);
	std::cout << b.position.x << ", " << b.position.y << '\n';
	b.position.translate(1.0,-1.0);
	std::cout << b.position.x << ", " << b.position.y << '\n';
}
