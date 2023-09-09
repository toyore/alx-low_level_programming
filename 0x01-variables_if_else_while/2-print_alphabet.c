#include <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints alphabeth in lower cases
 * Return: allows (0) success
 */
int main (void)
{
	char letter = 'a'; //start with 'a'
	while (letter <= 'z') //iterate through 'a' to 'z'
	{
		putchar(letter); //print the current character and move to the next line
		letter++; //increment and move to the next character
	}
	putchar ('\n'); //print a newline character
	return (0);
}


