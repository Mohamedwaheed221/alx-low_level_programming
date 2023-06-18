#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main - Enter
 *
 * Description: A c program that print out if the number is positive or negative or zero by using if statement
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n + rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(" %d is %s\n", n, "is negative");
	}
	else if (n > 0)
	{
		printf(" %d is %s\n", n, "is positive");
	}
	else
	{
		printf(" %d is %s\n", n, "is zero");
	}
	return (0);

}
