/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 11:33:19 AM IST
 * Last modified : Monday 24 June 2019 03:38:09 PM IST
 * Description   : 
 * ***********************************************************************/


#include <iostream>
#include <vector>

class Account {
	friend std::ostream &operator << (std::ostream &os, const Account &obj);
	public:
		virtual void withdraw (int amount){
			std::cout << "Account class withdraw\n";
		}
	virtual ~Account()
	{//std::cout << "Account class destructor\n";
	}
};
std::ostream &operator << (std::ostream &os, const Account &obj)
{
	os << "Account display\n";
}

class Savings:public Account {
friend std::ostream &operator << (std::ostream &os, const Savings &obj);
	public:
		// virtual is implicitly inherited, but its better to use virtual again
		virtual void withdraw (int amount){
			std::cout << "Savings Account class withdraw\n";
		}
		virtual ~Savings()
		{//std::cout << "Savings Account class destructor\n";
		}
};
std::ostream &operator << (std::ostream &os, const Savings &obj)
{
	os << "Savings display\n";
}


class Trust:public Account {
	friend std::ostream &operator << (std::ostream &os, const Trust &obj);
	public:
		virtual void withdraw (int amount){
			std::cout << "Trust Account class withdraw\n";
		}
		virtual ~Trust()
		{//std::cout << "Trust Account class destructor\n";
		}
};
std::ostream &operator << (std::ostream &os, const Trust &obj)
{
	os << "Trust display\n";
}


class Checking:public Account {
	friend std::ostream &operator << (std::ostream &os, const Checking &obj);
	public:
		virtual void withdraw (int amount){
			std::cout << "Checking Account class withdraw\n";
		}
		virtual ~Checking()
		{//std::cout << "Checking Account class destructor\n";
		}
};
std::ostream &operator << (std::ostream &os, const Checking &obj)
{
	os << "Checking display\n";
}


int main()
{
	Account a;
	Checking c;
	Trust t;
	Savings s;

	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << t << std::endl;
	std::cout << s << std::endl;
	
	/***********************************
	 * here is the problem
	 ***********************************
	 */
	
	Account *ptr1 = new Account();
	std::cout << *ptr1;  // output: account display

	Account *ptr2 = new Checking();
	std::cout << *ptr2; // output: account display
	return 0;
}
