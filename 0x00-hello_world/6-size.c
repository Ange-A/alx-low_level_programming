#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char :%lu byte(S)\n", sizeof(d));
printf("Size of an int :%lu byte(S)\n", sizeof(a));
printf("Size of a long int :%lu byte(S)\n", sizeof(b));
printf("Size of a long long int :%lu byte(S)\n", sizeof(c));
printf("Size of a float :%lu byte(S)\n", sizeof(f));
