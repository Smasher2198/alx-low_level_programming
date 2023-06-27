#include "main.h"

/**
 * puts2 - Print every other character of a string, followed by a new line
 * @str: string's pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
