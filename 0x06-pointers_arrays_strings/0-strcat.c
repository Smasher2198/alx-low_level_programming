#include "main.h"

/**
 * _strcat - concentration of two strings
 * @dest: input value
 * @src: input value
 *
 * return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
