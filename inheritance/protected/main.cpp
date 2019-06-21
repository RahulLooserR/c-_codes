/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Friday 21 June 2019 11:26:53 AM IST
 * Last modified : Friday 21 June 2019 11:39:07 AM IST
 * Description   : 
 * ***********************************************************************/
#include <iostream>

class Base {
	public:
		int a{0};
		void display(){std::cout << a << ", " << b << ", " << c << std::endl;}

	protected:
		int b{0};
	private:
		int c{0};
};

class Derived:public Base{
	// a will be public
	// b will be protected
	// c will be inherited but does not have acces.

	public:
		void access_base_members(){
		//	a = 100; // ok
		//	b = 200; // ok
		//	c = 300; // compiler error
		}
		void display(){std::cout << a << ", " << b << ", " << c << std::endl;}

	private: 
	int c = 120;
};

int main()
{
	Base base;
	base.a = 100; // ok
	// base.b = 200; // compiler error
	// base.c = 300; // compiler error
	base.display();

	Derived d;
	//d.a = 150;
	// d.b = 250; // compiler error
	// d.c = 350;	// compiler error
	d.display();

	return 0;
}
