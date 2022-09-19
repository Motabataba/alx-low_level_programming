#include "main.h"

/**
 *print_rev - print in reverse
 *@s: argument
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int i = 0;
int n;
while (s[i] != '\0')
{
i++;
}

n = i - 1;
while (n >= 0)
{
_putchar(s[n]);
n--;
}
_putchar('\n');
}
