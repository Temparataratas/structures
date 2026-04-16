#include <iostream>

typedef struct {
	int real;
	int imag;
} Complex;

int main() {
	Complex c1;
	Complex c2;
	std::cout<<"Complex 1 - real: ";
	std::cin>> c1.real;
	std::cout<<"Complex 1 - imag: ";
	std::cin>> c1.imag;
	std::cout<<"Complex 2 - real: ";
	std::cin>> c2.real;
	std::cout<<"Complex 2 - imag: ";
	std::cin>> c2.imag;
	int real_sum;
	real_sum = c1.real + c2.real;
	int imag_sum;
	imag_sum = c1.imag + c2.imag;
	std::cout<<"Sum: "<< real_sum <<" + "<< imag_sum<< "i"<<std::endl;
	return 0;
}
