/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : method.cpp
 * Created on    : Monday 24 June 2019 12:14:54 PM IST
 * Last modified : Monday 24 June 2019 12:19:45 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

/* if we want methods not be overriden, we can use final specifier for methods
 */

class Base{
	public:
		void method() final {
			std::cout << "Base method\n";
		}   
};

// gives compiler error
class Derived:public Base {
	public:
		void method(){
			std::cout << "Derived method\n";
		}   
};

int main()
{
	Derived d;
	return 0;
}

