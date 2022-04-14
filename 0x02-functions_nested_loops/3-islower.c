#include "main.h"

/**
 * main - Entry point
 *
 * _islower - check for lower case letter
 *
 *@c: The int to check the case
 *
 * Return:0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
