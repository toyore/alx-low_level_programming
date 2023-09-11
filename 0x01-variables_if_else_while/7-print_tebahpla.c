#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints letters in reverse
 * Return: allows (0) success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
return (0);
}

