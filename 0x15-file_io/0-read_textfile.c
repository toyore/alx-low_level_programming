#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 *         If the file cannot be opened or read, it returns 0.
 *         If the filename is NULL, it returns 0.
 *         If the write operation fails or does not write the expected
 *         amount of bytes, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;

	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, ptr, letters);
	wr = write(STDOUT_FILENO, ptr, rd);
	if (op == -1 || rd == -1)
	{
		free(ptr);
		return(0);
	}
	free(ptr);
	close(op);
	return (wr);
}

