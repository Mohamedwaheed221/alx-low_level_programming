#include<stdlib.h>
#include"main.h"

/**
 * print_name - function to print a name.
 * @name: the name of the person.
 * @f: a pointer to a function.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
