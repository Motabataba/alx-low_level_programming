#include "main.h"

/**
 * _puts - check code
 *@str: argument
 *
 * Return: Nothing
 */

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
