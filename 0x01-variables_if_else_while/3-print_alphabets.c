#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0.
*/

int main(void)
{
	char letter;
	for (letter = 'a' ; letter <= 'z' ; letter++)
		putchar(letter);
	putchar('\n')
		for (letter = 'A' ; letter <= 'Z' ; letter++)
			putchar(letter);
	putchar('\n')
		return (0);
}
