#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: prints alphabets in lowercase
 *
 * Return: Always 0 (success)
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
