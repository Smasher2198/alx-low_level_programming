#include "main.h"

 /**
  * _strlen - Return string length
  * @s: the pointer to the string
  *
  * Return: Strings length
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
 * print_rev - Print a string in reverse followed by a new line
 * @s: strings pointer
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length > 0)
	{
		putchar(s[length - 1]);
		length--;
	}
	putchar('\n');
}
