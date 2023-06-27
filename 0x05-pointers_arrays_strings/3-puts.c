#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: pointer to the string
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_Putchar(*str);
		str++;
	}
	_putchar('\n');
}
