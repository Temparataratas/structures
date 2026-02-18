#include <iostream>

typedef struct {
	char name[50];
	float price;
	int quantity;
} Product;

int main() {
	Product p;
	std::cout<<"Enter name: ";
	std::cin>> p.name;
	std::cout<<"Enter price: ";
	std::cin>> p.price;
	std::cout<<"Enter quantity: ";
	std::cin>> p.quantity;
	int total;
	total = p.price * p.quantity;
	std::cout<<"Total: "<< total << " UAH"<< std::endl;
	return 0;
}
