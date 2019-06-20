/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Thursday 20 June 2019 10:41:20 AM IST
 * Last modified : Thursday 20 June 2019 11:04:18 AM IST
 * Description   : 
 * ***********************************************************************/

#include "complex.h"

int main()
{
	Complex complex1(7, 3), complex2(3, 9), complex4(10, 10);

	complex1.display();
	complex2.display();
	complex4.display();
	
	Complex complex3 = complex1 + complex2 + complex4;

	complex3.display();

	complex1.display();
	complex2.display();
	complex4.display();
	
	return 0;
}
