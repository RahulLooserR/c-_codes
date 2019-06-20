/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : main.cpp
 * Created on    : Thursday 20 June 2019 03:55:17 PM IST
 * Last modified : Thursday 20 June 2019 05:36:16 PM IST
 * Description   : 
 * ***********************************************************************/

#include "strings.h"

int main ()
{
	Move move("move_string");


	Move move2{move};
	move2 = move;

//	Move move3;
	Move move3 = "move3_string";

	move3 = Move("new_string");

	return 0;
}
