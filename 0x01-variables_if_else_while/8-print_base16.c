#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints all numbers of base 16
 * Return: allows (0) success
 */
int main(void)
{       
        int hexadec;
        
        for (hexadec = 0; hexadec <= 9; hexadec++)
        {       
                putchar(hexadec);
        }       
        
        for (hexadec = 'a'; hexadec <= 'f'; hexadec++)
        {       
                putchar(hexadec);
	}
        putchar('\n');
return (0);
}
