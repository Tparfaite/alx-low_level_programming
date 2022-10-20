#include "main.h"

/**
 * _isupper - checks whether passed character is uppercase
 * @c: character being checked
 *
 * Returns: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
