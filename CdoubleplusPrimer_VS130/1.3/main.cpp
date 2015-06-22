#include <iostream>
int main()
{
	// 1.3
	std::cout << "Hello, World" << std::endl;

	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1  << std::endl 
		<< " and " << v2 << std::endl // 1.5
		<< " is " << /*v1 + v2*/v1 * v2 << std::endl; // 1.4

	//1.6 Not Correct
	std::cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << std::endl;
	// ; makes expression end

	return 0;
}