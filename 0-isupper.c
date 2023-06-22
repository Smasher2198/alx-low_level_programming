#include "main.h"
/**
 * _isupper - Checking on uppercase characters
 * @c: The character to be checked
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
