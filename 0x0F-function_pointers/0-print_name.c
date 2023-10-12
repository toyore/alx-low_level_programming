#include <stdlib.h>
#include <unistd.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * print_name - Print a dynamically allocated name to the standard output.
 * @name: The name to print.
 * @f: the pointer argument
 */
void print_name(char *name, void (*f)(char *))
{
	size_t i;
	size_t len = _strlen(name);
	char *output = (char *)malloc(len + 1);

	if (output == NULL)
	{
		write(2, "Memory allocation failed\n", 24);
		exit(1);
	}

	for (i = 0; name[i]; i++)
	{
		output[i] = name[i];
	}

	output[len] = '\0';

	f(output);

	free(output);
}

