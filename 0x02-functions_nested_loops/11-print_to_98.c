#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98, in order separated by a comma followed by a space
 *
 * @n: number to begin with
 */
void print_to_98(int n)
{
	int i;

	if (i == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
	}
	printf("\n");
}
