/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 12:07:48 PM IST
 * Last modified : Monday 24 June 2019 12:13:12 PM IST
 * Description   : 
 * ***********************************************************************/

/*
  for the function to be overridden we need to use Exactly same signature.
  if we use "override" specifier, this will for me to do the same.
 */

#include <iostream>

class Base {
	public:
	virtual void fun_override () const{
		std::cout << "Base override method\n";
	}
};

class Derived:public Base {
	public:
	// if i write: virtual void fun_override(). gives compiler error
	virtual void fun_override () const override{
		std::cout << "Derived override method\n";
	}
};

int main ()
{
	Base *ptr = new Base();
	Base *ptr1 = new Derived();

	ptr->fun_override();
	ptr1->fun_override();
	
	return 0;
}
