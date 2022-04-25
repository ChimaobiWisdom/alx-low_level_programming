#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
int count = 0, c;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};


while (*(s + count) != '\0')
{
for (c = 0; c < 5; c++)
{
if (*(s + count) == lower_case[c] || *(s + count) == upper_case[c])
{
*(s + count) = numbers[c];
break;
}
}
count++;
}

return (s);
}
