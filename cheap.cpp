#include <iostream>

typedef struct {
	char name[99];
	float price;
} Product;

int main() {
	Product p1, p2, p3;
	std::cout<<"Product 1 - name: ";
	std::cin>> p1.name;
	std::cout<< "Product 1 - price: ";
	std::cin>> p1.price;
	std::cout<<"Product 2 - name: ";
	std::cin>> p2.name;
	std::cout<<"Product 2 - price: ";
	std::cin>> p2.price;
	std::cout<<"Product 3 - name: ";
	std::cin>> p3.name;
	std::cout<<"Product 3 - price: ";
	std::cin>> p3.price;
	if(p1.price < p2.price and p1.price < p3.price) {
		std::cout<<"Cheapest: " << p1.name << " (" << p1.price << " UAH"<< ")"<<std::endl;
	}
	if(p2.price < p1.price and p2.price < p3.price) {
		std::cout<< "Cheapest: "<<p2.name << " (" << p2.price << " UAH" <<")"<<std::endl;
	}
	if(p3.price < p1.price and p3.price < p2.price) {
		std::cout<< "Cheapest: "<< p3.name << " ("<< p3.price << " UAH"<< ")"<<std::endl;
	}
	return 0;
}
