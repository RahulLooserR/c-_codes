/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : account.h
 * Created on    : Friday 21 June 2019 10:42:22 AM IST
 * Last modified : Friday 21 June 2019 11:18:07 AM IST
 * Description   : 
 * ***********************************************************************/

#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <iostream>
#include <string>


class Account{
	public:
	int balance;
	std::string name;

	Account ();
	~Account ();
	void deposit (int);
	void withdraw (int);
};


#endif
