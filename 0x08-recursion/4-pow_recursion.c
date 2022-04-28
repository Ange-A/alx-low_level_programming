#include "main.h"

/**
 * _pow_recursion - returns the value of x raised by the power of y
 * @x: value to raise
 * @y: value to raise by
 *
 * Return: raised value
 */
int _pow_recurion(int x, int y)
{
	if ( y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y -1));
}