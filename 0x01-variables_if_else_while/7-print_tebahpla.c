#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase in reverse
 * Return: 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
