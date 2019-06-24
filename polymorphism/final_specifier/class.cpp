/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : class.cpp
 * Created on    : Monday 24 June 2019 12:14:45 PM IST
 * Last modified : Monday 24 June 2019 12:36:52 PM IST
 * Description   : 
 * ***********************************************************************/

/*
 * if we don't want a class to be derived, we use final specifier.
 */

#include <iostream>

class Base final {
	public:
	void method(){
		std::cout << "Base method\n";
	}
};

// gives compiler error
class Derived :public Base {
	public:
	void method1(){
		std::cout << "Derived method\n";
	}
};

int main()
{
	Derived d;
	return 0;
}
