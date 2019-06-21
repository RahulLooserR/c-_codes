/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Friday 21 June 2019 02:57:43 PM IST
 * Last modified : Friday 21 June 2019 04:12:00 PM IST
 * Description   : 
 * ***********************************************************************/

#include <iostream>

class Base {
	private:
		int value;

	public:
		Base ():value{0}{std::cout << "Base-default constructor\n";}
		Base (int x):value{x}{std::cout << "Base overloaded contructor\n";}
	
		// copy constructor
		Base (const Base &other)
			:value{other.value}{
			std::cout << "Base copy constructor\n";
		}

		// copy assignment
		Base &operator= (const Base &other){
			std::cout << "Base copy assignment\n";

			if (this == &other){
				return *this;
			}

			value = other.value;
			return *this;
		}

		~Base () {std::cout << "Base destrucor\n";}
};

// deriving copy constructor and copy assignment
class Derived:public Base {
	private:
		int double_value;

	public:
		Derived():double_value{0}{std::cout << "Derived default constructor\n";}
		Derived(int x):Base(x), double_value{x}{std::cout << "Derived overloaded constructor\n";}

		// derived copy constructor
		Derived (const Derived &other)
			:Base(other), double_value{other.double_value}
			{
				std::cout << "Derived copy construcor\n";
			}

		// copy assignment operator overloading
		Derived &operator = (const Derived &other){
			std::cout << "Derived copy assignment\n";
			if (this == &other){
				return *this;
			}
			Base::operator=(other);
			double_value = other.double_value;
			return *this;
		}

		~Derived(){std::cout << "Derived destructor\n";}
};

int main()
{
	//Base b1{100};
	//Base b2 = b1;
	//b1 = b2;

	Derived derived2{200};
	Derived d{derived2};
	derived2 = d;

	return 0;
}
