#include <stdio.h>
/**
 * main -Entry point
 *
 * Prints single digits with putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;


	for (n = 0 ; n <= 9 ; n++)
		putchar(n + '0');

	putchar('\n');
	return (0);
}


