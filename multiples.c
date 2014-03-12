#include "stdio.h"

// Finds all the multiples of 3 or 5 below 1000.
int main(){
	int i;
	const int MAX_NUM = 1000;
	int sum = 0;

	for (i = 0; i < MAX_NUM; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%i", sum);

	return 0;
}
