/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : complex.cpp
 * Created on    : Thursday 20 June 2019 10:49:12 AM IST
 * Last modified : Thursday 20 June 2019 11:54:36 AM IST
 * Description   : 
 * ***********************************************************************/

#include "complex.h"

Complex::Complex (int real = 0, int imag = 0)
	:real{real}, imag{imag}
	{
	}

void Complex::display()
{
	std::cout << "real: " << real << "\nimaginary: " << imag << std::endl;
}

Complex Complex::operator - (const Complex &rhs) const
{
	int treal, timag;
	treal = real - rhs.real;
	timag = imag - rhs.imag;
	
	return Complex(treal, timag);
}
