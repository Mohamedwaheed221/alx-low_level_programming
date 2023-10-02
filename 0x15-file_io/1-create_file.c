#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file we creat.
 * @text_content: the name fo the content we will save.
 *
 * Return: 1 on success -1 on failer
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, fp;

	if (!filename)
		return (0);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600)
		if (fp < 0)
			return (-1);
	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fp, text_content, y);
		if (x != y)
			return (-1);
	}
	close(fp);
	return (1);
}
