#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Description: This program generates a random number and determine if its positive or negative
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d",n);
	if (n > 0)
	{
		printf(" is positive\n");
	}
	if (n == 0)
	{
		printf(" is zero\n");
	}
	if (n < 0)
	{
		printf(" is negative\n");
	}

	return (0);

}
