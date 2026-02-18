#include <iostream>

typedef struct {
	char title[99];
	char author[50];
	int year;
} Book;

int main() {
	Book b;
	std::cout<<"Enter title: ";
	std::cin>> b.title;
	std::cout<<"Enter author: ";
	std::cin>> b.author;
	std::cout<<"Enter year: ";
	std::cin>> b.year;
	std::cout<<'"' << b.title << '"' << " by " << b.author <<" ("<< b.year << ")"<<std::endl; 
	return 0;
}
