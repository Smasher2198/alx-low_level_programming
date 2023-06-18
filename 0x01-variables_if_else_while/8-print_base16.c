#include <stdio.h>
/**
 * main - A program thats prints all numbers of base 16 in lowercase
 * Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
