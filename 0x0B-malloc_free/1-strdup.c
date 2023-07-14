#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int b, size = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	t = (char *)malloc((sizeof(char)*size) + 1);
	if (t == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		t[b] = str[b];
	t[size] = '\0';

	return (t);
}
