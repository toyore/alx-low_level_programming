#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 - success
 */
int main(void)
{
    /* Print the size of various types with proper grammar */
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

    return (0);
}
