#include <stdio.h>
/**
 * main - a program that prints digits of base 10
 * starting from 0
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		pputchar(i);
	}
	putchar('\n');
	return (0);
}
