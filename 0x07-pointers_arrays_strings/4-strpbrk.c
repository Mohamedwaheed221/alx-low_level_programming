#include "main.h"
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/



char *_strpbrk(char *s, char *accept)
{
	int u, o;
	char  *p;

	u = 0;
	while (s[u] != '\0')
	{
		o = 0;
		while (accept[o] != '\0')
		{
			if (accept[o] == s[u])
			{
				p = &s[u];
				return (p);
			}
			o++;
		}
		u++;
	}
	return (0);
}
