#include "main.h"
/**
 * Jack Bauer - prints every minute of the day 
 */
void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0, hrs <= 23; ++hrs)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}