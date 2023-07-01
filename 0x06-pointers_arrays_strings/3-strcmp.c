#include "main.h"
/**
 * _strcmp - function that copies a string
 * @s1: string 1.
 * @s2: string 2.
 * Rwturn: 0.
 */


int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i=0; s1[i] != '\n' || s2[i] != '\n'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag=1;
			break;

		}
	}
	if (flag == 1)
		return (flag)

}
