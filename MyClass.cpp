#include "MyClass.h" ;
#include "iostream";

MyClass::MyClass() {
	std::cout << "Contructor" << std::endl;
}
MyClass::~MyClass() {
	std::cout << "Destroyed" << std::endl;
}
