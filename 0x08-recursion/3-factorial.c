#include "main.h"

/**
 * int factorial - returns factorial of a given number
 * @n: the factorial whose number will be printed
 *
 * Return: factorial off n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n *factorial(n - 1));
}
