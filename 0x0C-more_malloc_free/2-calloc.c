#include "main.h"

/**
<<<<<<< HEAD
 * _calloc _ allocate memory using malloc and initialize it to zero
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
=======
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
>>>>>>> 790da39fe14da4aa6ed68526078bd3bc76741e7d
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	ig (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
