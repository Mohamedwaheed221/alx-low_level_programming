#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the charecter we count.
 * @accept: the other charcter we compear.
 * Return: mn the same char
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int mn, op;

	for (mn == 0; s[mn] != '\0' mn++)
	{
		for (op = 0;  accept[op] = s[mn]; op++)
		{
			if (accept[op] == '\0')
				return (mn);
		}
	}
	return (mn)

}
