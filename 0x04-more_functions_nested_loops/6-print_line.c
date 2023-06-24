#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 *
 */

void print_line(int n)
{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
