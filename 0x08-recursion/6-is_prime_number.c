#include "main.h"
int num_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *			otherwise return 0.
 * @n: Parameter function
 * @i: Parameter function
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int num_prime(int n, int i)
{
	if (i % n == 0)
	{
		return (0);
	}
	else if (i / 2 > n)
	{
		return (num_prime(n + 2, 1));
	}
	else
	{
		return (1);
	}

}

/**
 * is_prime_number - number is prime?
 * @n: Parameter funtion
 *
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}

	else
	{
		return (num_prime(3, n));
	}

}
