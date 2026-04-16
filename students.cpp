#include <iostream>

typedef struct{
	char name[50];
	int age;
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
	std::cout<<"Results: "<<std::endl;
        for(int i = 0; i < 3; i++) {
		std::cout<< i + 1<< ". "<< class_11a[i].name<< " - "<< class_11a[i].grade<<std::endl; 
	}
        return 0;
}	

