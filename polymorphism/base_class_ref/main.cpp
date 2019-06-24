/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 11:33:19 AM IST
 * Last modified : Monday 24 June 2019 12:30:47 PM IST
 * Description   : 
 * ***********************************************************************/


#include <iostream>
#include <vector>

class Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Account class withdraw\n";
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
		virtual ~Savings()
		{//std::cout << "Savings Account class destructor\n";
		}
};

class Trust:public Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Trust Account class withdraw\n";
		}
		virtual ~Trust()
		{//std::cout << "Trust Account class destructor\n";
		}
};

class Checking:public Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Checking Account class withdraw\n";
		}
		virtual ~Checking()
		{//std::cout << "Checking Account class destructor\n";
		}
};

void do_withdraw (Account &ref, int amount)
{
	ref.withdraw(amount);
}

int main()
{
	Account a;
	Checking c;
	Trust t;
	Savings s;

	Account &refa = a;
	Account &refc = c;

	refa.withdraw(11);
	refc.withdraw(11);
	
	do_withdraw(a, 20);
	do_withdraw(c, 200);
	do_withdraw (s, 30);

	return 0;
}
