#include "main.h"
/**
 * main -  prints _purtchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char ermias[] = "_putchar";

	int c;
	{
	for (c = 0; c < 8; c++)
		_putchar(ermias[c]);
	}
_putchar('\n');
return (0);

}
