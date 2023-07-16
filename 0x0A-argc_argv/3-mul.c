#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count.
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", Error);
		return (1);
	}

		int x, y, sum = 0;

		x = atoi(argv[1]);
		y = atio(argv[2]);
		sum = x * y;
		printf("%d\n", sum);

		return (0);
}
