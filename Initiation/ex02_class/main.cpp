#include <iostream>


class Test
{
	public:
		Test() {
			std::cout << "Constructor called" << std::endl;
		};
		~Test() {
			std::cout << "Destructor called" << std::endl;
		};
};

void A () {
	Test obj;
}

int main()
{
	Test obj;
	Test *obj2 = new Test();
	(void)obj2; // pour éviter un warning de variable non utilisée
	delete obj2;
	A();
}

