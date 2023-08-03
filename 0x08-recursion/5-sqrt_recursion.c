#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number that calculates square root
 *
 * return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - Helper function for recursion to find natural square root
 * @n: number to calculate the square root
 * @i: iterator
 *
 * return: the square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (1);
	return (_sqrt_helper(n, i + 1));
}
