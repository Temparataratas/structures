#include <iostream>

typedef struct {
	char name[99];
	float price;
} Product;

typedef struct {
	Product product;
	int quantity;
} Order;

int main() {
	Order r;
	std::cout<< "Product name: ";
	std::cin>> r.product.name;
	std::cout<<"Product price: ";
	std::cin>> r.product.price;
	std::cout<<"Order quantity: ";
	std::cin>>r.quantity;
	float total;
	total = r.product.price * r.quantity;
	std::cout<<"Order total: "<< total << " UAH"<<std::endl;
	return 0;
}


