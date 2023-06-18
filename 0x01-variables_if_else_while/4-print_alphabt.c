#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 * except letters q and e
 *
 * Return: 0(success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
