/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Thursday 20 June 2019 12:06:21 PM IST
 * Last modified : Thursday 20 June 2019 12:42:50 PM IST
 * Description   : 
 * ***********************************************************************/

#include "copy.h"

int main()
{
	Copy copy1(10, 20);

	Copy copy2 {copy1};

	copy2 = copy1;

	copy1.display();
	copy2.display();

	return 0;
}
