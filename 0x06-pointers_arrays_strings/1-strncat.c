#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string that will be appended to
 * @src: the string that will be added
 * @n: the number of bytes of str to concatenate
 * Return: success when the answer is correct
 */

char *_strncat(char *dest, char *src, int n)
{
int = a, b;
a = 0;
b = 0;

while(dest[a] != '\0') 
	a++;

while (src[b] != '\0' && b < n) 
{
 dest[a] = src[b];
 i++;
 j++;
}

dest[a] = '\0';

return (dest);
}
