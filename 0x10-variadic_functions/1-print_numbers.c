#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers separated by a string with
 * a newline at the end.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers to be printed.
 * @...: Variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

