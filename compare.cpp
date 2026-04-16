#include <iostream>

typedef struct {
	char name[99];
	int price;
} Product;

int main() {
	Product p1;
	Product p2;
	std::cout<<"Product 1 - name: ";
	std::cin>> p1.name;
	std::cout<<"Product 1 - price: ";
	std::cin>> p1.price;
	std::cout<<"Product 2 - name: ";
	std::cin>> p2.name;
	std::cout<<"Product 2 - price: ";
	std::cin>> p2.price;
	if(p1.price > p2.price) {
		std::cout<< p1.name << " is more expensive"<<std::endl;
	}
	if(p1.price == p2.price) {
		std::cout<< p1.name << " and " << p2.name << " equal"<<std::endl;
	}
	else {
		std::cout<< p2.name << " is more expensive"<<std::endl;
	}
}
