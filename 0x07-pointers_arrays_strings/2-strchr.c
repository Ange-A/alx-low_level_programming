#include "main.h"

/**
 * *_strchr(char *s, char c)
 *@s: string to be searched
 *@c: character to be found
 *
 * Return: a pointer to the first occurence of char
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);

		}
	}
}
