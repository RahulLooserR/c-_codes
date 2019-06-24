/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Monday 24 June 2019 11:33:19 AM IST
 * Last modified : Monday 24 June 2019 11:57:29 AM IST
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
	{std::cout << "Account class destructor\n";}
};

class Savings:public Account {
	public:
		// virtual is implicitly inherited, but its better to use virtual again
		virtual void withdraw (int amount){
			std::cout << "Savings Account class withdraw\n";
		}
		virtual ~Savings()
		{std::cout << "Savings Account class destructor\n";}
};

class Trust:public Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Trust Account class withdraw\n";
		}
		virtual ~Trust()
		{std::cout << "Trust Account class destructor\n";}
};

class Checking:public Account {
	public:
		virtual void withdraw (int amount){
			std::cout << "Checking Account class withdraw\n";
		}
		virtual ~Checking()
		{std::cout << "Checking Account class destructor\n";}
};


int main()
{
	Account *p1 = new Account();
	Account *p2 = new Savings();
	Account *p3 = new Trust();
	Account *p4 = new Checking();

	std::cout << "\n Using array.\n=============\n";	
	Account *array[] = {p1, p2, p3, p4};
	
	/* without virtual keyword all the pointers are bound statically to 
	   Account class.
	   and all will give same result
	   p1.withdraw -> Account withdraw
	   p2.withdraw -> Account withdraw
	   p3.withdraw -> Account withdraw
	   p4.withdraw -> Account withdraw
	 */
	// dynamically bound using virtual keyword
	for (int i = 0; i < 4; i++){
		array[i]->withdraw(100);
	}
	
	std::cout << "\n Using vector.\n=============\n";
	std::vector <Account*> v {p1, p2, p3, p4};

	for (auto acc : v){
		acc->withdraw(100);
	}
		
	std::cout << std::endl;

	// we need virtual destructor for this, we wil get warnings
	delete p1;
	delete p2;
	delete p3;
	delete p4;	

	return 0;
}
