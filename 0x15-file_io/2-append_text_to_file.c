#include "main.h"
/**
 * append_text_to_file: a function that appends text at
 * the end of a fie
 * @filename: the file to be modified
 * @text_content: the text content
 * Return: Always Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, op;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		return (1);
	for (i = 0; text_content[i];)
		i++;
	op = open(filename, O_WRONLY | O_APPEND);
	write(op, text_content, i);
	if (op == -1)
		return (-1);
	close(op);
	return (1);
}
