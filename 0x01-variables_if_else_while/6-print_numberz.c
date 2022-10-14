#include <stdio.h>
/**
 * main - Entry point 
 *
 *Prints single digits using putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}


