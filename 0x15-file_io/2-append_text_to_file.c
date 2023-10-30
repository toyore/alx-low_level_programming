#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to be modified.
 * @text_content: The text content to append to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, op;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	else
		i = 0;
	op = open(filename, O_WRONLY | O_APPEND);
	write(op, text_content, i);
	if (op == -1)
		return (-1);
	close(op);
	return (1);
}
