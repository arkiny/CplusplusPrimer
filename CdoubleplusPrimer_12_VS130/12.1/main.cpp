#include "StrBlob.h"

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

	cppp::StrBlob b1; {
		cppp::StrBlob b2 = { "a", "an" "the" };
		b1 = b2;
		b2.push_back("about");
	} // b1 - 3, b2 - erased end of the block
}