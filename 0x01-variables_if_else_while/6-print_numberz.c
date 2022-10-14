#include <stdio.h>
/**
 * main - Entry point 
 *
 *Prints single digits using putchar
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
		putchar(n);

	putchar("\n");

	return (0);
}


