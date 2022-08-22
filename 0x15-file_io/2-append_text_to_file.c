#include "main.h"
/**
 * append_text_to_file - a function that appends text
 * @filename: filename
 * @text_content: text
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(file, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(file);
	return (1);
}
