#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argv: argument vector.
 * Return: always 0 (succses)
 */

int main(int argc; char **argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
