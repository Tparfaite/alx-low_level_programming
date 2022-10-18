#include "main.h"
/**
 * print_alphabet_x10 - prints ten times the alphabets
 *
 * Return : Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char p;

	while (n < 10)
	{
		p = 'a';

		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		n++;
	}
}
