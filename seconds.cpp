#include <iostream>

typedef struct {
	int hours;
	int minutes;
	int seconds;
} Time;

int main() {
	Time t;
	std::cout<<"Enter hours: ";
	std::cin>> t.hours;
	std::cout<<"Enter minutes: ";
	std::cin>> t.minutes;
	std::cout<<"Enter seconds: ";
	std::cin>> t.seconds;
	int seconds;
        seconds = (t.hours * 60 * 60) + (t.minutes * 60) + t.seconds;
        std::cout<<"Total seconds: "<< seconds<<std::endl;
        return 0;
}	
