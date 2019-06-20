/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : strings.cpp
 * Created on    : Thursday 20 June 2019 04:08:44 PM IST
 * Last modified : Thursday 20 June 2019 05:36:53 PM IST
 * Description   : 
 * ***********************************************************************/

#include "strings.h"

Move::Move()
{
	str = nullptr;
	std::cout << "no-args constructer called \n";

	str = new char[1];
	*str = '\0';
}

Move::Move (const char *src)
{
	std::cout << "overloaded constructer called \n";
	std::cout << src << std::endl;;
	str = new char[strlen(src) + 1];
	strcpy(str, src); 
}

// copy constructor
Move::Move (const Move &src)
{
	/*
	if (this == src){
		return *this;
	}
	*/

	std::cout << "copy constructor called\n";
	//	delete []str;

	char *str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
}


// assignment copy
Move &Move::operator = (const Move &src)
{
	std::cout << "assignment copy called\n";
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
	std::cout << "move constructor called\n";
	str = src.str;
}

// assignment move
Move &Move::operator = (Move &&src)
{
	std::cout << "assignment move called\n";

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
	std::cout << "destructor called\n";
	if(str != nullptr){
		delete []str;
	}
}
