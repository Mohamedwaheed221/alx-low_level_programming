#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main - Enter
 *
 * Description: A C prigram that print out if the number is positive or negative or zero by using if statment
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		 printf(" %d is %s\n", n, "is negative");
	}
	

	   if (n > 0)
        {
                printf(" %d is %s\n", n, "is positive");
        }
        else if
        {
                printf(" %d is %s\n", n, "is zero");
        }
	return (0);
}
