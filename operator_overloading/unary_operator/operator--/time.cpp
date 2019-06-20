#include "time.h"

// constructor using initializer list
Time::Time (int hours = 0, int minutes = 0)
	:hours{hours}, minutes{minutes}
	{
	}

void Time::displayTime()
{
	std::cout << hours << " : " << minutes << std::endl;
}

// operator overaloading, return object by value
Time& Time::operator-- ()
{
	--minutes;
	if (minutes == 0){
		hours;
		if(hours == 0){
			hours = 23;
		}
		minutes = 59;
	}

//	return Time(hours, minutes);
	return *this;
}

// operator overaloading, return object by reference
Time& Time::operator-- (int)
{
	/*
	--minutes;
	if (minutes == 0){
		hours;
		if(hours == 0){
			hours = 23;
		}
		minutes = 59;
	}


//	return Time(hours, minutes);
	return *this;
	*/
	//Time temp(hours, minutes);
	--(*this);
	return *this;
}
