<<<<<<< HEAD
#include <stdlib.H>
=======
#include <stdlib.h>
>>>>>>> 0dc98468b799a05f3a94f028e2ef197c2ed9d490
#include "main.h"
/**
<<<<<<< HEAD
 * _calloc _ allocate memory using malloc and initialize it to zero
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
=======
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
>>>>>>> 0dc98468b799a05f3a94f028e2ef197c2ed9d490
 *
 * Return: pointer to the memory area s
 */
<<<<<<< HEAD
void *_calloc(unsigned int nmemb, unsigned int size)
=======
char *_memset(char *s, char b, unsigned int n)
>>>>>>> 0dc98468b799a05f3a94f028e2ef197c2ed9d490
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
