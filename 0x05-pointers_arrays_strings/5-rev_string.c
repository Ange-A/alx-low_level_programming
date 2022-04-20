#include "main.h"

/**
 * rev_string - reverses a string
 * @s: A pointer that will be changed
 *
 * Return: void
 */

void rev_string(char *s)
{
char *start_C, *end_C, C;
int i, count;
int length = 0;

for (i = 0; s[i]; i++)
{
length ++;
}

count = length;

start_c = s;
end_c = s;

for (i = 0; i < count - 1; i++)
{
end_c++;
}

for (i = 0; i < count / 2; i++)
{

c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c ++;
end_c --;
}
}

