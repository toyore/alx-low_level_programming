#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * Description: A function that swaps the values of two inte
 * @a: the var to be swapd with 'b'
 * @b: the var to be swaped with 'a'
 */
void swap_int(int *a, int *b)
{
	int digit = *a;
	*a = *b;
	*b = digit;

}
