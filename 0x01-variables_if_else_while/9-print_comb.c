#include <stdio.h>
/**
 * main - main function
 * Description: This program prints all possible combinations of
 * single-digit number
 * Return: allows (0) success
 */
int main(void)
{       
       int i;
       int j;

       for (i = 0; i <= 9; i++)
       {
	       putchar(i + '0');
	       if (i <= 9)
	       {
		       putchar(',');
		       putchar(' ');
	       }
	       putchar('\n');
       }
return (0);
}
       

