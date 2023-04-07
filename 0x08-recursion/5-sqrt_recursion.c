#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Parameter function
 *
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));

}

/**
 * _sqrt - _sqrt_recursion
 * @n: Parameter function
 * @i: Parameter function
 *
 * Return: sqrt
 */

int _sqrt(int n, int i)

{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
