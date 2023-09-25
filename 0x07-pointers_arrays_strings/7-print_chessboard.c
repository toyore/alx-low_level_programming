#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to an 8x8 character array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				/* Black square*/
				printf("\033[30;47m%c\033[0m", a[i][j]);
			} else
			{
				/* White square*/
				printf("\033[97;40m%c\033[0m", a[i][j]);
			}
		}
		printf("\n");
	}
}
