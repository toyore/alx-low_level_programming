#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, total_length, index;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			while (av[i][total_length] != '\0')
			{
				total_length++;
			}
			total_length++; /* for the newline character */
		}
	}
	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}
	index = 0;

	/* Copy the arguments and newline characters into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			int j = 0;

			while (av[i][j] != '\0')
			{
				concatenated[index++] = av[i][j++];
			}
			concatenated[index++] = '\n';
		}
	}

	concatenated[index] = '\0';

	return (concatenated);
}

