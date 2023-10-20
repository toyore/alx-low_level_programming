#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	char *operator;
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator[1] != '\0' || (operator[0] != '+' && operator[0] != '-' &&
				operator[0] != '*' && operator[0] != '/' && operator[0] != '%'))
	{
		printf("Error\n");
		return (99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (operator[0] == '+')
		result = num1 + num2;
	else if (operator[0] == '-')
		result = num1 - num2;
	else if (operator[0] == '*')
		result = num1 * num2;
	else if (operator[0] == '/')
		result = num1 / num2;
	else if (operator[0] == '%')
		result = num1 % num2;

	printf("%d\n", result);

	return (0);
}

