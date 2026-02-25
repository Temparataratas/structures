#include <iostream>

typedef struct {
	int width;
	int height;
} Rectangle;

int main() {
	Rectangle r1;
	Rectangle r2;
	std::cout<<"Rectangle 1 - width: ";
	std::cin>> r1.width;
	std::cout<<"Rectangle 1 - height: ";
	std::cin>> r1.height;
	std::cout<<"Rectangle 2 - width: ";
	std::cin>> r2.width;
	std::cout<<"Rectangle 2 - height: ";
	std::cin>> r2.height;
	float a1, a2;
	a1 = r1.width * r1.height;
	a2 = r2.width * r2.height;
	if(a1 == a2) {
		std::cout<<"Rectangle 1 and Rectangle 2 equal (area: "<< a1<< ")"<<std::endl;
	}
	if(a1 > a2) {
		std::cout<<"Rectangle 1 is larger (area: "<< a1<< ")"<<std::endl;
	}
	if(a2 > a1){
		std::cout<<"Rectangle 2 is larger (area: "<< a2<<")"<<std::endl;
	}
	return 0;
}
