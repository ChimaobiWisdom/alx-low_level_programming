#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: returns char
 */


char *string_toupper(char *str)
{
int c;

for (c = 0; str[c] != '\0'; c++)
{
if (str[c] >= 'a' && str[c] <= 'z')
{
str[c] = str[c] - 32;
}
}

return (str);
}
