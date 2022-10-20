#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiples of five,
 * Buzz, and for multiples of both three and five, FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if ((numb % 3) == 0 && (numb % 5) == 0)
			printf("FizzBuzz");

		else if ((numb % 5) == 0)
			printf("Buzz");

		else if ((numb % 3) == 0)
			printf("Fizz");

		else
			printf("%d", numb);

		if (numb == 100)
			continue;
		printf(" ");
	}
	printf('\n');

	return (0);
}
