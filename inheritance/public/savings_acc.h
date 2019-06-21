/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : savings_acc.h
 * Created on    : Friday 21 June 2019 10:46:07 AM IST
 * Last modified : Friday 21 June 2019 11:19:15 AM IST
 * Description   : 
 * ***********************************************************************/

#ifndef _SAVINGS_ACC_H
#define _SAVINGS_ACC_H

#include "account.h"

class Savings_acc:public Account {
	public:
	int rate;

	Savings_acc();
	~Savings_acc();
	void deposit(int);
	void withdraw (int);
};

#endif
