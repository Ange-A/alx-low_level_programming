#include "main.h"
/**
 * swap_int - swaps the values of int *a, int *b 
 * @a: A pointer that will be updated
 * @a: B pointer that will be updated
 * Return: void that means answer is correct
 */

void swap_int(int *a, int *b)

{
int f;

f = *a;
*a = *b;
*b = f;
}
