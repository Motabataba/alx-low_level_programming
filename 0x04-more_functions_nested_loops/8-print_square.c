#include "main.h"

/**
 * print_square - check code
 * @size: size of square
 *
 * Return: nothing
 */
void print_square(int size)
{

int k;
int j;
if (size > 0)
{
for (k = 0; k < size; k++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
