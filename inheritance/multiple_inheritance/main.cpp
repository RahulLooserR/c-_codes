/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Friday 21 June 2019 04:56:54 PM IST
 * Last modified : Friday 21 June 2019 05:05:02 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

class Base1 {
	private:
		int a = 0;
		int b = 0;
	public:
		Base1(int a = 0, int b = 0)
			:a{a}, b{b}
		{
			std::cout << "Base1 constructor\n";
		}
};


class Base2 {
	private:
		int c = 0;
		int d = 0;
	public:
		Base2(int a = 0, int b = 0)
			:c{a}, d{b}
		{
			std::cout << "Base2 constructor\n";
		}
};

/*
 * syntax for public inheritance
 * 1. class Derived:public/private/protected Base1, Public/protected/private Base2
 * 2. class Derived:public/private/protected Base1, Base2
 * in case 1 different access qualifiers are provided while 
 * in case 2 single access modifier is provided for both base classes
 */

class Derived:public Base1, Base2{
	private:
		int e = 0;
		int f = 0;
	public:
		Derived(int a = 0, int b = 0)
			:e{a}, f{b}
		{
			std::cout << "Derived class destructor\n";
		}
};

int main()
{
	Derived d;
	
	return 0;
}
