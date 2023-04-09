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
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
