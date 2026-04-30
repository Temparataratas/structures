#include <iostream>
#include <cmath>

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point start;
	Point end;
} Segment;

int main() {
	Segment s;
	std::cout<<"Start point - x: ";
	std::cin>> s.start.x;
	std::cout<<"Start point - y: ";
	std::cin>> s.start.y;
	std::cout<< "End point - x: ";
	std::cin>> s.end.x;
	std::cout<<"End point - y: ";
	std::cin>> s.end.y;
	float length;
	length = std::sqrt(std::pow(s.end.x - s.start.x, 2) + std::pow(s.end.y - s.start.y, 2));
	std::cout<<"Segment length: "<< length<<std::endl;
	return 0;
}
	
