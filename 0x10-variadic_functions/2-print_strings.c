#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings separated by a string with
 * a newline at the end.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings to be printed.
 * @...: Variable number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

