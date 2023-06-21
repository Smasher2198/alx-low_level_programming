#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * followed by a new line
 * Return: 0 always
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
