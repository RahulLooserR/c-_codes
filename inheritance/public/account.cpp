/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : account.cpp
 * Created on    : Friday 21 June 2019 10:45:43 AM IST
 * Last modified : Friday 21 June 2019 11:18:49 AM IST
 * Description   : 
 * ***********************************************************************/

#include "account.h"

Account::Account()
	:balance{0}, name{"name-account"}
{
	std::cout << "base-account constructor\n";
}

Account::~Account()
{
	std::cout << "base-account destructor\n";
}

void Account::deposit(int amount)
{
	std::cout << "base-account deposit: " << amount << std::endl;
}

void Account::withdraw(int amount)
{
	std::cout << "base-account withdraw: " << amount << std::endl;
}
