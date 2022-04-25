#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to a character that will be changed
 *@s2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)

{

char *str_i = s1;
char *str_ii = s2;


while (*str_i != '\0' && *str_ii != '\0' && *str_i == *str_ii)
{
str_i++;
str_ii++;
}

return (*str_i - *str_ii);
}
