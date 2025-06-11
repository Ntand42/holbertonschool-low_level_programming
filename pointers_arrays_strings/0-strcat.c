#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (must have enough space)
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find the end of dest string */
	while (dest[i] != '\0')
		i++;

	/* append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* null-terminate the resulting string */
	dest[i] = '\0';

	return (dest);
}
