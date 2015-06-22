#include <iostream>

int main(){
	// 1.9
	int i = 50, sum = 0;;
	while (i < 101){
		sum += i;
		++i;
	}

	// 1.10
	int j = 10;
	while (j != 0){
		std::cout << j << std::endl;
		--j;
	}

	// 1.11
	int a(0), b(0);
	std::cin >> a >> b;
	while (a <= b){
		std::cout << a << std::endl;
		++a;
	}
}