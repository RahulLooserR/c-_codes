#include "time.h"

int main()
{
	Time newTime(0, 1);
	newTime.displayTime();

	Time time1, time(2);

	--newTime;
	newTime.displayTime();
	
	newTime--;
	newTime.displayTime();

	return 0;
}
