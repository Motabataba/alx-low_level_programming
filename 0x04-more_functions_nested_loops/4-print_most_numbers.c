#include "main.h"

/**
 * print_most_numbers - most nums
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
int numb = '0';
while (numb <= '9')
{
if(numb != '2' && numb != '4')
_putchar(numb);

numb++;
}

_putchar('\n');
}
