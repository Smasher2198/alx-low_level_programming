#include <stdio.h>
/**
 * main - A program that prints alphabets in lowecase then uppercase
 * and it is followed by a new line
 *
 * Return: 0(success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
