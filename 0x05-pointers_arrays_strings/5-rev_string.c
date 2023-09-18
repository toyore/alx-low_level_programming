#include "main.h"
#include <string.h>
/**
 * rev_string -A a function that reverses a string.
 * @s: the pointer of the 1st char
 */
void rev_string(char *s)
{
	int length;
	int start;
	int end;

	if (s == NULL)
	{
		return;
	}
	length = strlen(s);

	start = 0;

	end = length - 1;

	while (start < end)
	{
		int swap = s[start];

		s[start] = s[end];
		s[end] = swap;

		start++;
		end--;
	}
}
