/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Friday 21 June 2019 02:57:43 PM IST
 * Last modified : Friday 21 June 2019 03:30:03 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

class Base {
	private:
		int value;

	public:
		Base ():value{0}{std::cout << "Base-default constructor\n";}
		Base (int x):value{x}{std::cout << "Base overloaded contructor\n";}
		~Base () {std::cout << "Base destrucor\n";}
};

class Derived:public Base {
	private:
		int double_value;

	public:
		Derived():double_value{0}{std::cout << "Derived default constructor\n";}
		Derived(int x):Base(x), double_value{x}{std::cout << "Derived overloaded constructor\n";}
		~Derived(){std::cout << "Derived destructor\n";}
};

int main()
{
/*
	Base base;
	std::cout << std::endl;

	Derived derived;	// calls base default constructor then derived constructor
	std::cout << std::endl;
*/
	Derived derived1{100}; // calls base default constructor then derived constructor
	std::cout << std::endl;

	// after adding using Base::Base in derived class
	Derived derived2{200};
	std::cout << std::endl;

	return 0;
}
