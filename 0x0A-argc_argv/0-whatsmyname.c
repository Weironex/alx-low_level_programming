#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0
 */

int main(int argc, char **argv)

{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
