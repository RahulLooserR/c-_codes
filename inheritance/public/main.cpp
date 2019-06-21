/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.c
 * Created on    : Friday 21 June 2019 10:40:29 AM IST
 * Last modified : Friday 21 June 2019 11:11:11 AM IST
 * Description   : 
 * ***********************************************************************/

#include "savings_acc.h"

int main()
{
	Account acc {};
	acc.deposit (100);
	acc.withdraw (50);

	Account *acc_ptr = new Account{};
	acc_ptr->deposit (200);
	acc_ptr->withdraw (150);
	
	delete acc_ptr;

	std::cout << std::endl;

	Savings_acc sav_acc;
	sav_acc.deposit(1000);
	sav_acc.withdraw(300);

	std::cout << std::endl;

	Savings_acc *sav_ptr = new Savings_acc;
	sav_ptr->deposit(10000);
	sav_ptr->withdraw(2000);

	delete sav_ptr;
	std::cout << std::endl;

	return 0;
}
