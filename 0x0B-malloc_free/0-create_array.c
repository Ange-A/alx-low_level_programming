#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initializes it
 * @size: the number of bytes to allocate
 * @c: the specific char used to initialize
 *
 * Return: pointer to array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	
	if (size == 0 || array == 0)
			return(NULL);
		while (size--)
			array[size] = c;
		return (array);
}

