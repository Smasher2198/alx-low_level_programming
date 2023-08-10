#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with with optional limits
 * @s1: the first input string
 * @s2: the second iput string
 * @n: maximum number of bytes
 *
 * Return: a pointer to a newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	strncat(result, s2, n);
	return (result);
}
