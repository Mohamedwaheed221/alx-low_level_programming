#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: the fille we will appand in.
 * @text_content: the text we will appand.
 *
 * Return: 1 on success 0 on failer.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int x, fp, y = 0;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
