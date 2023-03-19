#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether number stored in the variable is positive or negative
 *
 * Return: always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
