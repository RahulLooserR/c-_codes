/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : copy.h
 * Created on    : Thursday 20 June 2019 12:10:24 PM IST
 * Last modified : Thursday 20 June 2019 12:41:32 PM IST
 * Description   : 
 * ***********************************************************************/


#ifndef _COPY_H
#define _COPY_H

#include <iostream>

class Copy {
	private:
		int data1;
		int data2;

	public:
	// default constuctor
	Copy(int data1 = 0, int data2 = 0);

	// copy constructor
	Copy(const Copy&);
	void display();

	// operator = overloading 
	Copy& operator = (const Copy&);	
};

#endif
