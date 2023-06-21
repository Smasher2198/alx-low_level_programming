#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z';)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
