#include <iostream>

int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal){
		int cnt = 1;
		while (std::cin >> val){
			if (val == currVal)
				++cnt;
			else{
				std::cout << currVal << " occurs "
					<< cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		} // end while
		std::cout << currVal << " occurs "
			<< cnt << " times" << std::endl;
	}

	// 1.17 입력값이 계속 결과 출력없이 입력만 받고, 중복값이 없으면 계속 1개 처리만 되서 출력됨
	// 1.18 did it
	// 1.19 
	
	int start = 1, end = 0;
	std::cin >> start, std::cin >> end;

	while (end <= start){
		std::cout << start << std::endl;
		--start;
	}	
	
	return 0;
}