#include <stdio.h>
#include "main.h"

/**
 * FizzBuzz - Entry point
 * print 1 to 100 in fizzbuzz rule
 *
 * Return: always 0
 */
void FizzBuzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 ==)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf(F"izz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
