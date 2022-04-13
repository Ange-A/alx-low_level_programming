#include"main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}

}
