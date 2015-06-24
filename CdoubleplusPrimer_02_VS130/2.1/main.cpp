//2.1
//int - 16 bit integer
//long - 32 bit integer
//long long - 64 bit integer
//short - 16 bit integer
//unsigned - using negative number memory as positive number memory
//float - single precision float point
//double - double -precision float point

//2.2
//이자 : int - 미친 폭리가 아닌 이상 int내 혹은 short로 해결 가능
//원금 : long long - 달러의 경우 long정도에서 가능할것 같지만, 원의 경우 그 비율의 배수
//상환금 : long long - 상동

//2.3, 2.4
#include <iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; // good, not wrapped
	std::cout << u - u2 << std::endl; // wrapped result
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // good
	std::cout << i - i2 << std::endl; // good
	std::cout << i - u << std::endl; // 0
	std::cout << u - i << std::endl; // 0
	system("pause");

	// 2.8
	std::cout << "2\115\n" << std::endl;
	std::cout << "\t115\n" << std::endl;
	system("pause");

	return 0;
}

//2.5
// 'a', L'a', "a", L"a"
// 문자 상수, 와이드 문자 상수, 문자열상수, 와이드 문자열 상수
// 10, 10u, 10L, 10uL, 021, 0xC
// 10진수 정수 상수, 음수가 없는 정수 상수, long 타입 정수상수, unsigned long 타입 정수상수, 8진수 상수, 16진수 상수
// 3.14, 3.14f, 3.14L
// double타입 부동소수점 상수, float타입 부동소수점 상수, long double 타입 부동소수점 상수
// 10, 10u, 10., 10e-2
// 10진수 정수 상수, 10진수 unsigned 최소타입 상수, 단정밀도 타입 부동소수점 상수, long 타입 단정밀도 부동소수점상수

//2.6
// int month = 0, day = 7;
// int month = 09, day = 07;
// 위쪽은 확실하게 10진수 정수 상수로 말할수 있으나, 아래쪽은 8진수 정수 상수 일 수도 있다.

//2.7
// a. "Who goes with F\145rgus?\123" - 문자열 상수
// b. 3.14e1L - long double 타입 단정밀도 부동 소수점 상수
// c. 1024f - float 타입 단정밀도 부동소수점 상수
// d. 3.14L - long double 타입 부동소수점 상수

