#include <stdio.h>
#include <string.h>

/**
 * _strncpy -> copies a string
 * @dest: Destination string
 * @src: source
 * @n:Number of bytes to copy
 * Return: pointers to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
