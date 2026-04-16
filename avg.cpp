#include <iostream>

typedef struct {
	char name[50];
	float grade;
} Student;

int main() {
	Student s1, s2, s3;
	std::cout<<"Student 1 - name: ";
	std::cin>> s1.name;
	std::cout<<"Student 1 - grade: ";
	std::cin>> s1.grade;
	std::cout<<"Student 2 - name: ";
	std::cin>> s2.name;
	std::cout<<"Student 2 - grade:  ";
	std::cin>> s2.grade;
	std::cout<<"Student 3 - name: ";
	std::cin>> s3.name;
	std::cout<<"Student 3 - grade: ";
	std::cin>> s3.grade;
	int avg;
	avg = (s1.grade + s2.grade + s3.grade) / 3;
	std::cout<< "Avarage grade: "<<avg<<std::endl;
	return 0;
}
