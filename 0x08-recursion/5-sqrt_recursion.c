#include "main.h"

int natural_sqrt_recursion(int n, int i);

/**
 * *_sqrt_recursion - returns the natural square root of a number
 * n: the numbe whose square root will be returned
 *
 * Return: returns square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return(-1);
	return(natural_sqrt_recursion(n, 0));
}
