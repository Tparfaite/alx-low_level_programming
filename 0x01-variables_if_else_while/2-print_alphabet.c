#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description:Print the lowercase alphabet
 *
 * Return: Always 0 (success)
 */
 int main(void)
{
	char c;
	for(c='a'; c<='z'; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return(0);
}
