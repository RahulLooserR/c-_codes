#include "time.h"

int main()
{
	Time newTime(0, 1);
	newTime.displayTime();

	--newTime;
	newTime.displayTime();
	
	newTime--;
	newTime.displayTime();

	return 0;
}
