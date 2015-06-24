#include <iostream>
#include <map>

#include "Sales_item.h"

int main()
{
	// 1.20
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;

	// 1.21
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	std::cout << book1 + book2 << std::endl;

	// 1.22
	Sales_item book, input;
	while (std::cin >> input){
		book += input;
	}
	std::cout << book;

	// 1.23, 24
	std::map<std::string, int> isbnNum;
	std::map<std::string, Sales_item> salesItembyISBN;


	
	return 0;
}