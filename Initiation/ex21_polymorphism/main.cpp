// ============================================================================
// EXEMPLES PRATIQUES DE NAMESPACES EN C++
// Compile avec : g++ -std=c++17 namespace_examples.cpp -o namespace_examples
// ============================================================================
 
#include "Library.hpp"
#include "Graphics.hpp"
#include "Company.hpp"
#include "MyGame.hpp"
#include "Utils.hpp"


class Parent
{
private:
	
public:
	Parent(/* args */) {}
	virtual ~Parent() {}

	void test () {
		std::cout << "test" << std::endl;
	}
	virtual void print() = 0;
};

class A : public Parent
{
private:
	
public:
	A(/* args */) {}
	~A() {}

	void print() {
		std::cout << "A" << std::endl;
	}
};

class B : public Parent
{
private:
	
public:
	B(/* args */) {}
	~B() {}
	void print() {
		std::cout << "B" << std::endl;
	}
};

class C : public Parent
{
private:
	
public:
	C(/* args */) {}
	~C() {}
	void print() {
		std::cout << "C" << std::endl;
	}
};

class D : public Parent
{
private:
	
public:
	D(/* args */) {}
	~D() {}
	void print() {
		std::cout << "D" << std::endl;
	}
};




int main() {
	Parent* a;
	int r = rand() % 3;
	switch (r) {
		case 0:
			a = new A();
			break;
		case 1:
			a = new B();
			break;
		case 2:
			a = new C();
			break;
		case 3:
			a = new D();
			break;
	}
	a->print();
	delete a;
}
