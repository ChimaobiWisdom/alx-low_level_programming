#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int c, u;

c = 0;
while (dest[c] != '\0')
{
c++;
}

u = 0;
while (u < n && src[u] != '\0')
{
dest[c] = src[u];
u++;
c++;
}

dest[c] = '\0';

return (dest);
}
