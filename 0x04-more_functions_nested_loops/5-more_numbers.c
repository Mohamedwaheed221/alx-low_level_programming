#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * Bwave ICT file
 * Return: void.
 */


void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
	}
	_putchar('\n');
}
