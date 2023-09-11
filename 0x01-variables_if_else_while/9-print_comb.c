#include <stdio.h>
/**
 * main - main function
 * Description: This program prints all possible combinations of
 * single-digit number
 * Return: allows (0) success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
return (0);
}
