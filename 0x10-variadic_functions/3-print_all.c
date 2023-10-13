#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print anything based on a format string.
 * @format: A list of types of arguments passed to the function.
 * @...: Variable arguments based on the format string.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i' || format[i] == 's'))
		{
			printf("%s, ", separator);
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				separator = "";
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				separator = "";
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
					separator = "";
					break;
				}
		}

		i++;
	}

	printf("\n");
	va_end(args);
}

