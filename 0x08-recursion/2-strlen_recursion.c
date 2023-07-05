#include "main.h"


/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a charecter that we will cout the length of it
 * Return: o that = the length.
 */

int _strlen_recursion(char *s)
{
	int o = 0;

	if (*s > '\0')
	{
		o = _strlen_recursion(s + 1) + 1;
	}
	return (o);
}
