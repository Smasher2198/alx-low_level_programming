#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
