// 2.9
// std::cin >> int input_value;
// bad - �ʱ�ȭ�� ���� �ʰ� �������
// int i = { 3.14 };
// ����ʱ�ȭ, �׷��� �Ҽ��� ���� 14�� ������ 3���� �ʱ�ȭ
// double salary = wage = 9999.99;
// identifier wage�� ������ �ȵ��ִ�.
// int i = 3.14
// Good �׷��� �Ҽ��� ���ϴ� ������ 3���� �ʱ�ȭ

#include <string>
#include <iostream>

// 2.10
std::string global_str; // init ""
int global_int; // 0
int main()
{
	int local_int;// trash
	std::string local_str; // init ""
	
	// 2.14 - �ڵ� ��ü�� ��ȿ�� �ڵ�, �׷��� i�� 100�� ������ �ƴ϶� 0���� 10������ ���� ��Ÿ����.
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i){
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;
	return 0;
}

// 2.11
// extern int ix = 1024; ����
// int iy; ���� �� ����
// extern int iz; ���������� �������� ����

// 2.12
// int double = 3.14 - ��ȿ ����� Ű����
// int _; - ��ȿ
// int catch-22 - ��ȿ ����� ������ -
// int 1_or_2 = 1; - ��ȿ
// double Double = 3.14 - ��ȿ

// 2.13
// j�� 100 - inner nest variable�� global variable �� ������.

// 2.14
// 