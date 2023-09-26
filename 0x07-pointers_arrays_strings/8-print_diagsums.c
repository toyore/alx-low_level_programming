#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the main diagonal and secondary diagonal
 *                  of a square matrix.
 * @a: A pointer to the square matrix represented as a 1D array.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_main_diag = 0; /* Sum of the main diagonal*/
	int sum_sec_diag = 0;  /* Sum of the secondary diagonal*/
	int main_diag_index;
	int sec_diag_index;
	int i;

	/* Loop through the matrix elements*/
	for (i = 0; i < size; i++)
	{
		/* Calculate the index for the main diagonal (row == column)*/
		main_diag_index = i * size + i;

		sum_main_diag += a[main_diag_index];

		/* Calculate the index for the secondary diagonal*/
		 /* (row + column == size - 1)*/
		sec_diag_index = i * size + (size - 1 - i);

		sum_sec_diag += a[sec_diag_index];
	}

	/* Print the sums*/
	printf("%d, %d\n", sum_main_diag, sum_sec_diag);
}
