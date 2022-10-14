#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * print alphabet except q and e
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if(c == 'e')
			continue;
		else if(c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
