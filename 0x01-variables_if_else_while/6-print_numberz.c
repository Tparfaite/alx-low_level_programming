#include <stdio.h>
/**
 * main - Prints single digits with putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

<<<<<<< HEAD
	for (n = 0; n < 10; n++)
		putchar(n);
	putchar('\n');
=======
	for (n = 0 ; n <= 9 ; n++)
		putchar(n + '0');

	putchar('\n');

>>>>>>> ed0811e188f5acce71ca264ca9ebaed9c73b0f47
	return (0);
}


