#include <iostream>

typedef struct {
	char name[99];
	float price;
	int quantity;
} Product;

int main() {
	Product p1, p2, p3;
	std::cout<<"Product 1 - name: ";
	std::cin>> p1.name;
	std::cout<<"Product 1 - price: ";
	std::cin>> p1.price;
	std::cout<<"Product 1 - quantity: ";
	std::cin>> p1.quantity;
	std::cout<<"Product 2 - name: ";
	std::cin>> p2.name;
	std::cout<<"Product 2 - price: ";
	std::cin>> p2.price;
	std::cout<<"Product 2 - quantity: ";
	std::cin>> p2.quantity;
	std::cout<<"Product 3 - name: ";
	std::cin>> p3.name;
	std::cout<<"Product 3 - price: ";
	std::cin>> p3.price;	
	std::cout<<"Product 3 - quantity: ";
	std::cin>> p3.quantity;
	float value;
	value = p1.price * p1.quantity + p2.price * p2.quantity + p3.price * p3.quantity;
        std::cout<<"Total warehouse value: "<< value<< " UAH"<<std::endl; 	
	return 0;
}
