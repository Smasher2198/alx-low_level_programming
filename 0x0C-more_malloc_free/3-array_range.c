#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of integer from min to max
 * @min: the minimum value of an array
 * @max: the maximum value of an array
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
