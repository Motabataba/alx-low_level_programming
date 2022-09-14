#include "main.h"

/**
 * print_sign - checks sig
 * @n: the number to  be checked
 *
 * Return: 1 if c > 0, 0 if c = 0, -1 if c < -1
 */
int print_sign(int n)
{
int k;
if (n > 0)
{
_putchar('+');
k = 1;
}
else if (n < 0)
{
_putchar('-');
k = -1;
}
else if (n == 0)
{
_putchar('0');
k = 0;
}
return (k);
}
