#include "main.h"
/**
 * _isalpha - Check for alphabetic charaters
 * @c: the character to be checked
 *
 * Return: 1 for  lowercase, uppercase letter, 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
