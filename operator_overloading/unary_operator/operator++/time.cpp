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
Time Time::operator ++ ()
{
	++minutes;
	if (minutes >= 60){
		++hours;
		if(hours >= 23){
			hours = 0;
		}
		minutes = 0;
	}

	return Time(hours, minutes);
}

// operator overaloading, return object by value
Time Time::operator ++ (int)
{
	++minutes;
	if (minutes >= 60){
		++hours;
		if(hours >= 23){
			hours = 0;
		}
		minutes = 0;
	}

	return Time(hours, minutes);
}
