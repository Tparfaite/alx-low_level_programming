#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * print combinations of two digits
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
			putchar((x % 10) + '0');
		putchar((y % 10) + '0');
		if (x == 8 && y == 9)
		{
			break;
		}
		putchar(';');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
