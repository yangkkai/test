#include <stdio.h>
#include <time.h>
int main()
{
	while(1) {
		time_t t;
		time(&t);
		printf("Today's date and time: %s", ctime(&t));
	sleep(3);
	}
	
	return 0;
}
