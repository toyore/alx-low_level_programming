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
    int is_first = 1;
    va_list args;

    va_start(args, format);

 
    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, (float)va_arg(args, double));
                break;
            case 's':
                {
                    char *str = va_arg(args, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", separator, str);
                    break;
                }
            default:
                break;
        }

        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') {
            separator = ", ";
            if (is_first) {
                is_first = 0;
                separator = "";
            }
        }

        i++;
    }

    printf("\n");
    va_end(args);
}















