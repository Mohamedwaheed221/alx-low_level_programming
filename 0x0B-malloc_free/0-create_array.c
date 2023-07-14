#include "main.h"

/**
 * *create_array - a function that creates an array of chars
 *  and initializes it with a specific char.
 *  @size: the size of array.
 *  @c: char to initalized.
 *  Return: Null.
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
