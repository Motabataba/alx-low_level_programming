#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: array being reversed
 * @n: size of array being reversed
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int b;

n = n - 1;
while (i < n)
{
b = a[i];
a[i] = a[n];
a[n] = b;
i++;
n--;
}
}
