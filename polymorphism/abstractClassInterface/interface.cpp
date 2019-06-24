/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 11:33:19 AM IST
 * Last modified : Monday 24 June 2019 04:04:47 PM IST
 * Description   : 
 * ***********************************************************************/


#include <iostream>
#include <vector>

class Interface_print{
	friend std::ostream &operator << (std::ostream &os, const Interface_print &ref);
	public:
	virtual void print(std::ostream &os) const = 0; // pure virtual function, making abstract 
	virtual ~Interface_print()
	{
	}
};

std::ostream &operator << (std::ostream &os, const Interface_print &obj)
{
	obj.print(os);
	return os;
}

class Account:public Interface_print {
	public:
		virtual void withdraw (int amount){
			std::cout << "Account class withdraw\n";
		}

		virtual void print (std::ostream &os) const override
		{
			os << "Account display\n";
		}
		virtual ~Account()
		{//std::cout << "Account class destructor\n";
		}
};

class Savings:public Account {
	public:
		// virtual is implicitly inherited, but its better to use virtual again
		virtual void withdraw (int amount){
			std::cout << "Savings Account class withdraw\n";
		}
		virtual void print (std::ostream &os) const override
		{
			os << "Savings display\n";
		}

		virtual ~Savings()
		{//std::cout << "Savings Account class destructor\n";
		}
};


class Trust:public Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Trust Account class withdraw\n";
		}
		virtual void print (std::ostream &os) const override
		{
			os << "Trust display\n";
		}

		virtual ~Trust()
		{//std::cout << "Trust Account class destructor\n";
		}
};


class Checking:public Account{
	public:
		virtual void withdraw (int amount){
			std::cout << "Checking Account class withdraw\n";
		}
		virtual void print (std::ostream &os) const override
		{
			os << "Cheking display\n";
		}

		virtual ~Checking()
		{//std::cout << "Checking Account class destructor\n";
		}
};

class Test:public Interface_print {
	public:
	void print (std::ostream &os) const override
	{
		os << "test display \n";
	}
};

void print (const Interface_print &obj)
{
	std::cout << obj << std::endl;
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
	 * the problem is resolved
	 ***********************************
	 */

	Account *ptr1 = new Account();
	std::cout << *ptr1;  // output: Account display

	Account *ptr2 = new Checking();
	std::cout << *ptr2; // output: Checking display

	Test *test = new Test();
	std::cout << *test;
	
	// using regular function
	print(s); // Savings display

	return 0;
}
