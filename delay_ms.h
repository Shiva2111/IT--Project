#include<time.h>
void delay1(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds =  number_of_seconds/10000;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds);
		
}