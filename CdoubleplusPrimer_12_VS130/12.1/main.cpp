#include "StrBlob.h"


void process(std::shared_ptr<int> ptr)
{
	*ptr += 1;
	//
}

int main()
{
	//std::shared_ptr<std::string> p1;
	//std::shared_ptr<std::list<int>> p2;
	//if (p1 && p1->empty())
	//	*p1 = "hi";

	//std::shared_ptr<int> p3 = std::make_shared<int>(42);
	//std::shared_ptr<std::string> p4 = std::make_shared<std::string>(10, '9');

	//std::shared_ptr<int> p5 = std::make_shared<int>();

	//auto p6 = std::make_shared<std::vector<std::string>>();

	//auto p = std::make_shared<int>(42);
	//auto q(p);
	//auto r = std::make_shared<int>(42);
	//r = q;

	//12.1
	cppp::StrBlob b1; {
		cppp::StrBlob b2 = { "a", "an" "the" };
		b1 = b2;
		b2.push_back("about");
	} // b1 - 3, b2 - erased end of the block

	//12.2 did
	//12.3 does not need - ����Ÿ�� ��ȯ�Ǳ� ������ const�Ű��� �ʿ����� �ʴ�.
	//12.4  
	//12.5 �Ͻ��� ĳ��Ʈ�� ���� char* �� ���ڿ� ����� �޾Ƽ� ó���� �����ϴ�.

	//12.10
	{
		std::shared_ptr<int> p(new int(42));
		//process(std::shared_ptr<int>(p)); 
		//int j = *p;

		//12.11
		process(std::shared_ptr<int>(p.get()));
		// p�� �Ҹ�ʰ� ���ÿ� ���ο� ����Ʈ�������� ����, �ش� ����Ʈ �����ʹ� �Լ� ���μ��� ���� ����
		//int j = *p.get();

		auto p = new int();
		auto sp = std::make_shared<int>();

		process(sp);//good
		//process(new int()); // bad
		process(p); // �Ϲ��� ��ȯ
		process(std::shared_ptr<int>(p));
	}

	// Allocator
	{
		int n = 5;
		std::allocator<std::string> alloc;
		auto const p = alloc.allocate(n);
		// ��ü�� �������� ���� �޸𸮸� �Ҵ�
		auto q = p;
		alloc.construct(q++);

	}
}