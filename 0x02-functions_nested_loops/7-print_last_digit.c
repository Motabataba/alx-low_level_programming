#include "main.h"

/**
 * print_last_digit - prints
 * @c: passed variable
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
int last_digit;
if (c < 0)
c = (-1) * c;
last_digit = c % 10;
_putchar(last_digit + '0');
return (last_digit);
}
