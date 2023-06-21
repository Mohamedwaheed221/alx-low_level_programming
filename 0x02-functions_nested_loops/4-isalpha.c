#include "holberton.h"

/**
  * _islower - Checks for lowercase character and uppercase
  * @c: The character to be checked
  *
  * Return: 1 for alphabet  character or 0 for anything else
  */
int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
