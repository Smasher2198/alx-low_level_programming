#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9, followed by a new line
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
