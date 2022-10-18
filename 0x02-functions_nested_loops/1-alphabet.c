#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 *Description:  print alphabets in lowercase
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
