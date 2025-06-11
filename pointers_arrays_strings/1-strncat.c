#include "main.h"

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: destination string (must have enough space)
 * @src: source string
 * @n: maximum number of bytes to append from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find end of dest */
	while (dest[i] != '\0')
		i++;

	/* append up to n bytes from src */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add null terminator */
	dest[i] = '\0';

	return (dest);
}
