#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int hashtag, index;

	if (size > 0)
	{
		for (hashtag = 1; hashtag <= size; hashtag++)
		{
			for (index = size - hashtag; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hashtag; index++)
				_putchar('#');

			if (hashtag == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
