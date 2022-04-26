#include "main.h"

/**
 **_memcpy - copies bytes from memory area
 *@dest: where memory will be copied to
 *@src: value to be copied
 *@n: number of bytes
 *
 *Return: resturns a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
