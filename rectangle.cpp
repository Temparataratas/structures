#include <iostream>

typedef struct {
	int width;
	int height;
} Rectangle;

int main() {
	Rectangle r;
	std::cout<<"Enter width: ";
	std::cin>> r.width;
	std::cout<<"Enter height: ";
	std::cin>> r.height;
	float area;
        area = r.width * r.height;
        std::cout<<"Area: "<< area <<std::endl;
        float perimeter;
        perimeter = 2*r.width + 2*r.height;
        std::cout<<"Perimeter: "<< perimeter<<std::endl;
        return 0;
}	
