#include <iostream>

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	int minutes;
	int hours;
} Time;

typedef struct {
	char name[99];
	Date date;
	Time time;
} Event;

int main() {
	Event e;
	std::cout<<"Event name: ";
	std::cin>> e.name;
	std::cout<<"Date - day: ";
	std::cin>> e.date.day;
	std::cout<<"Date - month: ";
	std::cin>> e.date.month;
	std::cout<<"Date - year: ";
	std::cin>> e.date.year;
	std::cout<<"Time - hours: ";
	std::cin>> e.time.hours;
	std::cout<<"Time - minutes: ";
	std::cin>> e.time.minutes;
	std::cout<<"Event: "<< e.name <<std::endl;
	std::cout<<"When: "<< e.date.day <<"."<<e.date.month<<"."<<e.date.year<< " at "<<e.time.hours<<":"<<e.time.minutes<<std::endl;
	return 0;
}
