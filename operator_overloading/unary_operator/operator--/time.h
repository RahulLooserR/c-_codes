/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : operator++.h
 * Created on    : 19-06-2019
 * Last modified : Wednesday 19 June 2019 04:59:41 PM IST
 * Description   : 
 * ***********************************************************************/

#ifndef _TIME_H
#define _TIME_H

#include <iostream>

class Time {
	private:
		int hours;
		int minutes;
	
	public:
		Time (int , int );
		void displayTime();
		
		// calls --x, prefix
		Time& operator -- ();
		
		// calls x--, postfix
		Time& operator --(int);
};

#endif
		

