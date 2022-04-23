#include<main.h>

/**
 * _strcat - concatenates two strings
 * @dest:string to append to
 * @src: string to add
 *
 *Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char ch1[50]= "dest";
char ch2[50]= "src";

printf("\n 1st String : [ %s]",ch1);
printf("\n\n 2nd String : [ %s ]",ch2);

strcat(ch1,ch2);
printf("\n\n Concatenated String is : [ %s ]\n",ch1);

return 0;
}
