#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print the last digit of the number stored in the variable
 *
 *Return: always 0
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is zero", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	printf("\n");

	return (0);
}
