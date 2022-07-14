#includeh "main.h"

/**
 * _strncpy -> copies a string
 * @dest: Destination string
 * @src: source string
 * @n:Number of bytes to copy
 * Return: pointers to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
