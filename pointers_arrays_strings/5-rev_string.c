#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j, temp;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Swap characters from start and end */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
