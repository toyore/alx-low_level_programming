#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints all kinds of 3 digits
 * Return: allows (0)  success
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int n = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (n <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(n + '0');

				if (i < 7 || j < 8 || n < 9)
				{
					putchar(',');
					putchar(' ');
				}
				n++;
			}
			j++;
			n = j + 1;
		}
		i++;
		j = i + 1;
		n = j + 1;
	}
	putchar('\n');
return (0);
}


