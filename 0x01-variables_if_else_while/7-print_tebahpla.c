#include <stdio.h>

/**
  * main - Prints the alphabet at reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
putchar('\n');
return (0);
}
