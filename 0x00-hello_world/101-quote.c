#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - main function
 *
 * Description: Prints a specified message to standard error
 *
 * Return: always 1 (indicatng an error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";

	write(STDERR_FILENO, message,strlen(message));
	return (1);
}
