#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check code
 * @n: argument
 *
 * Returm: nothing
 */

void print_to_98(int n)
{
if (n >= 98)
{
for (n = n; n > 98; n--)
{
printf("%d ,", n);
_putchar(' ');
}
printf("%d\n", n);
}
else
{
for (n = n; n < 98; n++)
printf("%d, ", n);
}
}
