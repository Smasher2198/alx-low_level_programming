#include "main.h"
/**
 * print_last_digit - Print the last digit
 * @n: The number to print the last digit
 *
 * Return: the va;ue of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
