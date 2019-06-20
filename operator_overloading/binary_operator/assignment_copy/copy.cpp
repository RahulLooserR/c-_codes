/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : copy.cpp
 * Created on    : Thursday 20 June 2019 12:12:53 PM IST
 * Last modified : Thursday 20 June 2019 12:41:53 PM IST
 * Description   : 
 * ***********************************************************************/

#include "copy.h"

Copy::Copy (int data1, int data2)
	:data1{data1}, data2{data2}
	{
		std::cout << "constructor called\n";
	}


Copy::Copy (const Copy &rhs)
{
	std::cout << "copy constructor called\n";

	data1 = rhs.data1;
	data2 = rhs.data2;
}


Copy &Copy::operator = (const Copy &rhs)
{
	std::cout << "assignment copy (=) called\n";

	data1 = rhs.data1;
	data2 = rhs.data2;
	
	return  *this;
}

void Copy::display()
{
	std::cout << data1 << ", " << data2 << std::endl;
}
