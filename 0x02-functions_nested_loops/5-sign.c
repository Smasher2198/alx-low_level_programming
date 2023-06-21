#include "main.h"
/**
 * print_sign - A function that print the sign of a number
 * determines whether it is greater, equal or less than zero
 *
 * @n: the input number to be checked
 *
 * Return: 0 is zero, 1 is greater than zero and -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
