#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int c;

c = 0;
while (c < n && src[c] != '\0')
{
dest[c] = src[c];
c++;
}

while (c < n)
{
dest[c] = '\0';
c++;
}

return (dest);

}
