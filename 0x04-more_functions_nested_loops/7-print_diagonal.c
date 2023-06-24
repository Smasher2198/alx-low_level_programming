#include "main.h"

/**
 * print_diagonal - Draw a line that prints a diagonal line
 * @n: number of times the character '\' should be printed
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
