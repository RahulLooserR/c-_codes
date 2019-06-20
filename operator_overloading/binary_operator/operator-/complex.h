/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : complex.h
 * Created on    : Thursday 20 June 2019 10:43:17 AM IST
 * Last modified : Thursday 20 June 2019 11:55:18 AM IST
 * Description   : 
 * ***********************************************************************/

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>

class Complex {
	private:
		int real;
		int imag;

	public:
		// constructor
		Complex (int real, int imag);
		void display();

		// operator - overloading
		Complex operator - (const Complex&) const;
};

#endif
