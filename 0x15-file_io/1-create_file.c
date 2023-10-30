#include "main.h"

/**
 * create_file - function that creates a file
 *@filename: The file to be modified
 *@text_content: The text
 * Return: Always success
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, op;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i= 0; text_content[i];)
			i++;
	}
	else
		i = 0;

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	write(op, text_content, i);
	if (op == -1)
		return (-1);
	close(op);
	return (1);
}
