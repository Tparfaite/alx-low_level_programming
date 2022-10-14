#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptio: prints alphabets in reverse form
 *
 * Return: Always 0 (success)
 */

int main(void)

{

	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)

		putchar(letter);
	putchar('\n');
	return (0);
}
