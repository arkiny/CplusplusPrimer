#include <iostream>
// 1.7
///*
//	Paired comment/*                */cannot be duplicated.
//
//*/

int main()
{
	//1.8
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */; // fail, think about language's token
	std::cout << /*"*/" */ "/*" */;

	return 0;
}