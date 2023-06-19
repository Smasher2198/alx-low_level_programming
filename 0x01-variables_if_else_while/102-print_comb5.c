#include <stdio.h>
/**
 * main - Print  all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (m >= n)
			{
				putchar(n);
				putchar(m);
				if (n != 57 || m != 58)
				{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
