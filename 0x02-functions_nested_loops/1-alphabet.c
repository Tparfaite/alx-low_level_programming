/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * Description:  print alphabets in lowercase
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
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
