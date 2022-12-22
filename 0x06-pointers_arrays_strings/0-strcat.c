#include "main.h"

/**
 *_strcat - concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[i] = src[m];
		m++;
		m++;
	}

	dest[i] = '\0';
	return (dest);
}
