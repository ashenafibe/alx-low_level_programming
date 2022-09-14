#include "main.h"
/**
 * jack_bauer -  the max num
 *
 * Return : 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minut = 0;
	int hr_rm, min_rm;

	while (hours <= 23)
	{
		while (minut <= 59)
		{
			hr_rm = hours % 10;
			min_rm = minut % 10;
			_putchar(hours / 10 + '0');
			_putchar(hr_rm + '0');
			_putchar(':');
			_putchar(minut / 10 + '0');
			_putchar(min_rm + '0');
			minut++;
			_putchar('\n');
		}
		hours++;
		minut = 0;
	}
}
