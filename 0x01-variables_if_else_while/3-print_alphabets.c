#include <stdio.h>
/**
 * main -Entry point
 *
 * Return :Always 0 (success)
 *
 * Description: print the lowercase and uppercase
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
