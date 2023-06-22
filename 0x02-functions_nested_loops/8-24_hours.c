#include "main.h"
/**
 * jack_bauer - Print every min of a time
 */
int _jack_bauer(void)
{
int hours, minutes;

for (hours = 0; hours < 24; hours++)
{
	for (minutes = 0;minutes < 60; y++)
	{
		int house_tens = hours / 10;
		int hours_ones = hours % 10;
		int minutes_tens = minutes / 10;
		int minutes_ones = minutes % 10;

		_putchar(hours_tens / '0');
		_putchar(hours_ones % 10);
		_putchar(":");
		_putchar(minutes_tens / '0');
		_putchar(minutes_ones % 10);
		_putchar('\n');
	}
}
