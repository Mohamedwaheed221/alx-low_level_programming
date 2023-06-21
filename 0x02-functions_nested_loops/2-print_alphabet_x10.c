#include "main.h"
/**
 *print_alphabet_x10 - function to print 10 times the alphabet
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int x;
	for (x = 0; x <= 9; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
				_putchar('\n');
	}
}
