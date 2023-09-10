#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints alphabeth in lower cases
 * Return: allows (0) success
 */
int main(void)
{
	char letter = 'a';
	char capLet = 'A';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (capLet <= 'Z')
	{
		putchar(capLet);
		capLet++;
	}
	putchar ('\n');
return (0);
}
