#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		cahr *arg = arv[i];
		int j;

		for (j = 0; arg[j]; j++)
		{
			if (!isdigit(aarg[j]))
			{
				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);

	return (0);
}
