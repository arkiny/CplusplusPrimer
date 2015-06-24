//2.1
//int - 16 bit integer
//long - 32 bit integer
//long long - 64 bit integer
//short - 16 bit integer
//unsigned - using negative number memory as positive number memory
//float - single precision float point
//double - double -precision float point

//2.2
//���� : int - ��ģ ������ �ƴ� �̻� int�� Ȥ�� short�� �ذ� ����
//���� : long long - �޷��� ��� long�������� �����Ұ� ������, ���� ��� �� ������ ���
//��ȯ�� : long long - ��

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
// ���� ���, ���̵� ���� ���, ���ڿ����, ���̵� ���ڿ� ���
// 10, 10u, 10L, 10uL, 021, 0xC
// 10���� ���� ���, ������ ���� ���� ���, long Ÿ�� �������, unsigned long Ÿ�� �������, 8���� ���, 16���� ���
// 3.14, 3.14f, 3.14L
// doubleŸ�� �ε��Ҽ��� ���, floatŸ�� �ε��Ҽ��� ���, long double Ÿ�� �ε��Ҽ��� ���
// 10, 10u, 10., 10e-2
// 10���� ���� ���, 10���� unsigned �ּ�Ÿ�� ���, �����е� Ÿ�� �ε��Ҽ��� ���, long Ÿ�� �����е� �ε��Ҽ������

//2.6
// int month = 0, day = 7;
// int month = 09, day = 07;
// ������ Ȯ���ϰ� 10���� ���� ����� ���Ҽ� ������, �Ʒ����� 8���� ���� ��� �� ���� �ִ�.

//2.7
// a. "Who goes with F\145rgus?\123" - ���ڿ� ���
// b. 3.14e1L - long double Ÿ�� �����е� �ε� �Ҽ��� ���
// c. 1024f - float Ÿ�� �����е� �ε��Ҽ��� ���
// d. 3.14L - long double Ÿ�� �ε��Ҽ��� ���

