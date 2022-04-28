#include "main.h"


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
	return (_sqrt_recursion(n, 0));
}
