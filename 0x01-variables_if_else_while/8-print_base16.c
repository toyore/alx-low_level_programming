#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints all numbers of base 16
 * Return: allows (0) success
 */
int main(void)
{
	char hexdecimal[] = "0123456789abcdef\n";
	int i = 0;

	while (hexdecimal[i] != '\0')
	{
		putchar(hexdecimal[i]);
		i++;
	}
return (0);
}
