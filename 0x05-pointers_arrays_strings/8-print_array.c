#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of
 * integers, followed by a new line.
 * @a: The array of integers to be printed.
 * @n: The number of elements of the array to print.
 * Description: This function prints the first n
 * elements of the integer array a.
 * The elements are separated by a comma and space,
 * and a new line is printed at the end.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
