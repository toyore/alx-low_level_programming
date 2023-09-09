#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Description: This is a program that prints numbers greater than
 * five  and less than six
 * Return: allows (0) success
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
	if(lastDigit > 5){
		printf("Last digit of %d is %d and is greater than 5/n", n, lastDigit);
	}
	else if(lastDigit < 6 && lastDigit != 0){
		printf("Last digit of %d is %d and is less than 6 and not 0/n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0/n", n, lastDigit);
	}
	return (0);
}
