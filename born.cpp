#include <iostream>

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	char name[50];
	Date born;
} Student;

int main() {
	Student s;
	std::cout<< "Enter name: ";
	std::cin>> s.name;
	std::cout<<"Enter day: ";
	std::cin>> s.born.day;
	std::cout<<"Enter month: ";
	std::cin>> s.born.month;
	std::cout<<"Enter year: ";
	std::cin>> s.born.year;
	std::cout<<s.name << " was born on "<< s.born.day << "."<< s.born.month << "." << s.born.year<<std::endl;
	return 0;
}
