#include "main.h"

/**
 * _strlen - Returns the length of the string
 * @s: pointer to the string
 * Return: String's length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * puts_half - Prints half of string, followed by a new line
 * @str: String's pointer
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
