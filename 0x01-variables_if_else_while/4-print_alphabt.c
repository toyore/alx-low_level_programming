#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints letter a to z except a and e
 * Return: allows (0) success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
return (0);
}
