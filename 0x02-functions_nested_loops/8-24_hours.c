#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = '0'; hour <= 23; hour++)
	{
		for (minute = '0'; minute <= 59; minute++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');
		}
	}
}
