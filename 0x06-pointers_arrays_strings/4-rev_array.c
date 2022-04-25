#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
int *start_u, *end_u, u;
int c;


start_u = a;
end_u = a;


for (c = 0; c < n - 1; c++)
{
end_u++;
}




for (c = 0; c < n / 2; c++)
{


u = *end_u;
*end_u = *start_u;
*start_u = u;

start_u++;
end_u--;
}

}
