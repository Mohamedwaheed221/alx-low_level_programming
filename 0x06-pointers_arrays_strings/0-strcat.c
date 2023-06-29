#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (stc[j] != '\0')
	{
		dest[i] = stc[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
