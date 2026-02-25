#include <iostream>

typedef struct {
	int hours;
	int minutes;
	int seconds;
} Time;

int main() {
	Time t1;
	Time t2;
	std::cout<<"Time 1- hours: ";
	std::cin>> t1.hours;
	std::cout<<"Time 1 - minutes: ";
	std::cin>> t1.minutes;
	std::cout<<"Time 1 - seconds: ";
	std::cin>> t1.seconds;
	std::cout<<"Time 2 - hours: ";
	std::cin>> t2.hours;
	std::cout<<"Time 2 - minutes: ";
	std::cin>> t2.minutes;
	std::cout<<"Time 2 - seconds: ";
	std::cin>> t2.seconds;
	int r1, r2, dif;
	r1 = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
	r2 = (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
	if(r1 > r2) {
		dif = r1 - r2;
		std::cout<<"Diffrence: "<< dif<< " seconds"<<std::endl;
	}
	else {
		dif = r2 - r1;
		std::cout<<"Difference: "<< dif<<" seconds"<<std::endl;
	}
}
