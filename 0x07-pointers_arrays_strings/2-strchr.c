#include "main.h"
/**
 * *_strchr - a function that locates a character in a string
 * @s:the string that we will search on it.
 * @c: the charecter: we will search for.
 * Return: the charecter (c) or null
 */


char *_strchr(char *s, char c)
{
	while (*s == '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
