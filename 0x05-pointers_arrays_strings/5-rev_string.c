#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
