/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : strings.cpp
 * Created on    : Thursday 20 June 2019 04:08:44 PM IST
 * Last modified : Thursday 20 June 2019 06:47:19 PM IST
 * Description   : 
 * ***********************************************************************/

#include "strings.h"

Move::Move()
{
	str = nullptr;
	str = new char[1];
	*str = '\0';
}

Move::Move (const char *src)
{
	str = new char[strlen(src) + 1];
	strcpy(str, src); 
}

// copy constructor
Move::Move (const Move &src)
{
	char *str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
}


// assignment copy
Move &Move::operator = (const Move &src)
{
	if (this == &src){
		return *this;
	}
	
	delete []str;

	char *str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	
	return *this;
}

// move constructor
Move::Move (const Move &&src)
{
	str = src.str;
}

// assignment move
Move &Move::operator = (Move &&src)
{
	if (this == &src){
		return *this;
	}

	delete []str;
	str = src.str;
	src.str = nullptr;

	return *this;
}

Move::~Move()
{
	if(str != nullptr){
		delete []str;
	}
}

// input stream , stream extraction operator overloading 
std::istream &operator >> (std::istream &is, Move &rhs)
{
	char *temp_buff = new char[1000];
	is >> temp_buff;

	rhs = Move{temp_buff};
	
	delete []temp_buff;
	
	return is;
}

//output stream, stream insertion operator
std::ostream &operator << (std::ostream &os, const Move &rhs)
{
	os << rhs.str;
	return os;
}

void Move::display()
{
	std::cout << str << std::endl;
}
