#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string whose length will be pronted
 *
 * Return: return 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return(1 + _strlen_recursion(s+1));
}
