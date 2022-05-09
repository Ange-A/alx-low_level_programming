#include "mai.h"


/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each elemeny
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int;

	if (nmemb == 0 || size == 0)
		return (NULL);

	block = malloc(nmemb * size);
	if (block !== NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
