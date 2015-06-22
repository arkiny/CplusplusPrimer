#include <iostream>

int main(){
	int input(0), sum(0);
	while (std::cin >> input){
		sum += input;
	}
	std::cout << sum << std::endl;
}