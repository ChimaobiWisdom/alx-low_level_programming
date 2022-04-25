#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int c, u;

c = 0;
while (dest[c] != '\0')
{
c++;
}

u = 0;
while (src[u] != '\0')
{
dest[c] = src[u];
u++;
c++;
}
dest[c] = '\0';

return (dest);
}
