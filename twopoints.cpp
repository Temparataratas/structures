#include <iostream>
#include <cmath>

typedef struct {
	int x;
	int y;
} Point;

int main() {
	Point p1;
	Point p2;
	std::cout<<"Point 1 -  Enter x: ";
	std::cin>> p1.x;
	std::cout<<"Point 1 - Enter y: ";
	std::cin>> p1.y;
	std::cout<<"Point 2 - Enter x: ";
	std::cin>> p2.x;
	std::cout<<"Point 2 - Enter y: ";
	std::cin>> p2.y;
	float d;
	d = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
	std::cout<<"Distance: "<< d<<std::endl;
}
