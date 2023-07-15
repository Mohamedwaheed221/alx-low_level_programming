#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: integer.
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *K = malloc(b);

	if (K == 0)
		exit(98);

	return (K);
}
