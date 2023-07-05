#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number
 * @n: the number that we want to know his fact.
 * Return: -1 if n is lower than 0 or the factorial.
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
