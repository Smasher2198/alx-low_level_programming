#include "main.h"
/**
 * _abs - Compute absolute value of an integer
 * @n: value that computes value of integer
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
