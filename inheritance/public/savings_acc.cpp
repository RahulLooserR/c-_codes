/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : savings_acc.cpp
 * Created on    : Friday 21 June 2019 10:52:31 AM IST
 * Last modified : Friday 21 June 2019 11:20:53 AM IST
 * Description   : 
 * ***********************************************************************/


#include "savings_acc.h"

Savings_acc::Savings_acc()
	:rate{3}
{
	std::cout << "derived-Savings_account constructor\n";
}

Savings_acc::~Savings_acc()
{
	std::cout << "derived-Savings_account destructor\n";
}

void Savings_acc::deposit(int amount)
{
	std::cout << "derived-Savings_account deposit: " << amount <<std::endl;
	std::cout << balance << " " << name << std::endl;
}

void Savings_acc::withdraw(int amount)
{
	std::cout << "derived-Savings_account withdraw: " << amount << std::endl;
}
