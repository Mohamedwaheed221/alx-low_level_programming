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
	char *io = malloc(size);

	if (size == 0 || io == 0)
		return (0);
	while (size--)
		io[size] = c;
	return (io);
}
