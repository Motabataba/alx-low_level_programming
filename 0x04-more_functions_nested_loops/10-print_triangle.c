#include "main.h"

/**
 * print_triangle - check code
 * @size: argument or size
 *
 * Return: nothing
 */
void print_triangle(int size)
{
int i;
int k;
int blank;


if (size > 0)
{
for (i = 0; i < size; i++)
{
blank = size - i - 1;
for (k = 0; k < size; k++)
{
if (blank > k)
{
_putchar(' ');
}
else
{
_putchar('#');
}

}
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}
