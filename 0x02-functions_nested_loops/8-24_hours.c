#include "main.h"
/**
 * jack_bauer - Print every min of a time
 */
int jack_bauer(void)
{
int x, y;
int x = hours, y = minutes;

for (x = 0; x < 24; x++)
{
	for (y = 0; y < 60; y++)
	{
		int x_tens = x / 10;
		int x_ones = x % 10;
		int y_tens = y / 10;
		int y_ones = y % 10;

		_putchar(x_tens / '0');
		_putchar(x_ones % 10);
		_putchar(":");
		_putchar(y_tens / '0');
		_putchar(y_ones % 10);
		_putchar('\n');
	}
}
