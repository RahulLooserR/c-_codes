/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : strings.h
 * Created on    : Thursday 20 June 2019 03:57:34 PM IST
 * Last modified : Thursday 20 June 2019 05:23:11 PM IST
 * Description   : 
 * ***********************************************************************/


#ifndef _STRINGS_H
#define _STRINGS_H

#include <iostream>
#include <cstring>

class Move {
	private:
		char *str;

	public:
		// constructor
		Move();
		Move(const char *str);
		
		// copy constructor
		Move (const Move&);

		// move constructor
		Move (const Move&&);

		// assignment copy
		Move &operator = (const Move&);

		// assignment move
		Move &operator = (Move&&);
	
		// destructor
		~Move();
};





#endif
