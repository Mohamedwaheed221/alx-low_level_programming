#include "main.h"

/**
 * main - Write a function that swaps the values of two integers
 * @a: first integer.
 * @b: second integer.
 *
*/

void swap_int(int *a, int *b);
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
