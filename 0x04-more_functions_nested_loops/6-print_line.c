#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
