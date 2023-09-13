#include "main.h"
/**
 * _isalpha: checks if a character is alphabeth
 * @c: The character c checks
 * Description: This is a program that checks for alphabeth character
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise 
 */
int _isalpha(int c)
{

	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c >= 'Z'))
	{
		return(0);
	}
	else
	{
		return (1);
	}
}
