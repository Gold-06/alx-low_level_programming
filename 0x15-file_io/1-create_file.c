#include "main.h"
/**
 * create_file - a function that create file
 * @filename: filename
 * @text_content: null terminated
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	wr = write(file, text_content, i);
	if (wr == -1)
		return (-1);

	close(file);
	return (1);
}
