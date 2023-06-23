#include "main.h"
/**
 * _isupper - Check for lowercase characters
 * @c: Character to be checked
 *
 * Return: 1 for uppercase characters or 0 for anything
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
