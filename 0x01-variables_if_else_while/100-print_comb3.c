#include <stdio.h>
/**
 * main - A program that prints all possible combination of two digits
 * separated by a , and have space
 *
 * Return: 0(success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
