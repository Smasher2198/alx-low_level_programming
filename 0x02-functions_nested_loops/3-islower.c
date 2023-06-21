#include "main.h"
/**
 * _islower - displays 1 if the input is a, and 0 for others
 * @c: The character in ASCII mode
 *
 * Return: 1 for lowercase characters, 0 for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
