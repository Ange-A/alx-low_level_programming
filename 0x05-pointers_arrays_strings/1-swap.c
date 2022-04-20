#include "main.h"
/**
 * swap_int - swaps the values of integers a and b
 * @a: A pointer that will be updated
 * @b: B pointer that will be updated
 * Return: void that means answer is correct
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
