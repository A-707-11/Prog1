#include <stdio.h>

int main(void) 
{
	int sec;
	int hours, minutes, seconds;
	
	scanf("%d", &sec);
	
	hours = (sec/3600); 
	
	minutes = (sec -(3600*	hours))/60;
	
	seconds = (sec -(3600*hours)-(minutes*60));
	
	printf("%d:%d:%d\n",hours,minutes,seconds);
	
	return 0;
}
