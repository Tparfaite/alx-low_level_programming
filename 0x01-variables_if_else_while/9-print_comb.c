#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * prints possible combinations of single digits
 */
int main(void)
{
	int p=0;

	while (p < 10)
	{
		putchar(p);
		if (p != 9)
		{
			putchar(',');
			putchar(' ');
		}
		p++;
	}
	putchar('\n');
	return (0);
}
