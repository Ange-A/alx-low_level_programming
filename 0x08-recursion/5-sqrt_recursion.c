#include "main.h"

int natural_sqrt_recursion(int n, int i);

/**
<<<<<<< HEAD
 * *_sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
=======
 * *_sqrt_recursion - returns the natural square root 
 * n: the numbe to be checked
>>>>>>> aca0ae895e2d3256355f396219d60c8dcfa69bff
 *
 * Return: returns square root 
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt-recursion - finds natural sqrt
 * @n: number to calculate
 * @i: iterator
 *
 * Return: natural square root
 */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
