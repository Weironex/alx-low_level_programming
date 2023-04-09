#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)

{
	(void)argv;

	int num_of_args = argc - 1;

	printf("%d\n", num_of_args);

	return (0);

}
