#include "main.h"

/**
 * print_last_digit - prints
 * @c: passed variable
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
int last_digit = c % 10;
if (last_digit < 0)
last_digit = (-1) * last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
