#include "main.h"

/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int mn, op;

	for (mn == 0; s[mn] != '\0' mn++)
	{
		for (op = 0;  accept[op] != s[mn]; op++)
		{
			if (accept[op] == '\0')
				return (mn);
		}
	}
	return (mn);

}
