#include <iostream>

typedef struct {
	char name[50];
	float grade;
} Student;

int main() {
	Student class_11a[3];
	std::cout<<"Student 1 - name: ";
	std::cin>> class_11a[0].name;
	std::cout<<"Student 1 - grade: ";
	std::cin>> class_11a[0].grade;
	std::cout<<"Student 2 - name: ";
	std::cin>> class_11a[1].name;
	std::cout<<"Student 2 - grade: ";
	std::cin>> class_11a[1].grade;
	std::cout<<"Student 3 - name: ";
	std::cin>> class_11a[2].name;
	std::cout<<"Student 3 - grade: ";
	std::cin>> class_11a[2].grade;
	int max = class_11a[0].grade;
	if(class_11a[1].grade > max) {
		class_11a[1].grade = max;
		std::cout<<"Best student: "<< class_11a[1].name<< " ("<< max<< ")"<<std::endl;
	}
	else if(class_11a[2].grade > max) {
		class_11a[2].grade = max;
		std::cout<<"Best student: "<< class_11a[2].name<< " ("<< max<< ")"<<std::endl;
	}
	else {
		std::cout<<"Best student: "<< class_11a[0].name<< " ("<< max<<")"<<std::endl;
	}
	return 0;
}

