// 2.9
// std::cin >> int input_value;
// bad - 초기화를 하지 않고 변수사용
// int i = { 3.14 };
// 목록초기화, 그러나 소수점 이하 14는 버리고 3으로 초기화
// double salary = wage = 9999.99;
// identifier wage가 선언이 안되있다.
// int i = 3.14
// Good 그러나 소수점 이하는 버리고 3으로 초기화

#include <string>
#include <iostream>

// 2.10
std::string global_str; // init ""
int global_int; // 0
int main()
{
	int local_int;// trash
	std::string local_str; // init ""
	
	// 2.14 - 코드 자체는 유효한 코드, 그러나 i는 100이 기준이 아니라 0부터 10까지의 합을 나타낸다.
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i){
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;
	return 0;
}

// 2.11
// extern int ix = 1024; 정의
// int iy; 선언 및 정의
// extern int iz; 선언이지만 정의하지 않음

// 2.12
// int double = 3.14 - 무효 예약된 키워드
// int _; - 유효
// int catch-22 - 무효 예약된 연산자 -
// int 1_or_2 = 1; - 유효
// double Double = 3.14 - 유효

// 2.13
// j는 100 - inner nest variable이 global variable 을 가린다.

// 2.14
// 