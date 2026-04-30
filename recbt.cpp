#include <iostream>

typedef struct{
	int x;
	int y;
} Point;

typedef struct {
	Point bottom_left;
	Point top_right;
} Rectangle;

int main() {
	Rectangle r;
	std::cout<<"Bottom-left - x: ";
	std::cin>> r.bottom_left.x;
	std::cout<<"Bottom-left - y: ";
	std::cin>> r.bottom_left.y;
	std::cout<<"Top-right - x: ";
	std::cin>> r.top_right.x;
	std::cout<<"Top-right - y: ";
	std::cin>> r.top_right.y;
	float area;
	area = (r.bottom_left.x * r.bottom_left.y) + (r.top_right.x * r.top_right.y);
	std::cout<<"Area: "<< area<<std::endl;
	return 0;
}
