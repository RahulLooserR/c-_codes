#include "time.h"

int main()
{
	Time newTime(23, 59);
	newTime.displayTime();

	++newTime;
	newTime.displayTime();
	
	newTime++;
	newTime.displayTime();

	return 0;
}
