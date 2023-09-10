#includie <stdio.h>
/**
 * main - main function
 * Description: This is a program that prints alphabeth in lower cases
 * Return: allows (0) success
 */
int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}


