#include <iostream>
#include <cmath>

typedef struct {
	int x;
	int y;
} Point;

int main() {
	Point p;
	std::cout<<"Enter x: ";
	std::cin>> p.x;
	std::cout<<"Enter y: ";
	std::cin>> p.y;
	float d;
	d = sqrt(p.x*p.x + p.y*p.y);
	std::cout<< "Distance from origin: "<< d <<std::endl;
        return 0;
}	
