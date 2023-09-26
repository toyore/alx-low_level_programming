#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to an 8x8 character array representing the chessboard.
 */

#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]); /*Print the character at position (i, j)*/
		}
		printf("\n"); /* Move to the next row*/
	}
}
