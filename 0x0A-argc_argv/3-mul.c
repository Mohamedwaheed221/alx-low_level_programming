#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count.
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("%s\n", Error);
	else
	{
		int x, y, sum = 0;

		x = argv[1][0] - '0';
		y = argv[2][0] - '0';
		sum = x + y;
		printf("%d\n", sum);
	}
	return (0);
}
