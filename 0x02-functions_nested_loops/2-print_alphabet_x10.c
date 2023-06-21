#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 *
 * Return: always 0(success)
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
