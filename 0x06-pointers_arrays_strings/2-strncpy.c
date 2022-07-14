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
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
