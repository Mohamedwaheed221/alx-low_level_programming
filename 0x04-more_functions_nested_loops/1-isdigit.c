#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the number that will be check.
 * Return: 1 if its a digit , 0 overwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
