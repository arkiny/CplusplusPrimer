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
	//12.3 does not need - 데이타가 변환되기 때문에 const매개는 필요하지 않다.
	//12.4  
	//12.5 암시적 캐스트를 통해 char* 나 문자열 상수를 받아서 처리가 가능하다.

	//12.10
	{
		std::shared_ptr<int> p(new int(42));
		//process(std::shared_ptr<int>(p)); 
		//int j = *p;

		//12.11
		process(std::shared_ptr<int>(p.get()));
		// p가 소멸됨과 동시에 새로운 스마트포인터의 생성, 해당 스마트 포인터는 함수 프로세스 이후 삭제
		//int j = *p.get();

		auto p = new int();
		auto sp = std::make_shared<int>();

		process(sp);//good
		//process(new int()); // bad
		process(p); // 암묵적 변환
		process(std::shared_ptr<int>(p));
	}

	// Allocator
	{
		int n = 5;
		std::allocator<std::string> alloc;
		auto const p = alloc.allocate(n);
		// 객체를 생성하지 않은 메모리를 할당
		auto q = p;
		alloc.construct(q++);

	}
}