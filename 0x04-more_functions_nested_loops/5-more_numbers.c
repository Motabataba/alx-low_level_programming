#include "main.h"

/**
 * more_numbers - check code
 *
 * Return: void
 */
void more_numbers(void)
{
int tens;
int ftens;

for (tens = 0; tens < 10; tens++)
{
for (ftens = 0; ftens <= 14; ftens++)
{
if (ftens > 9)
{
_putchar((ftens / 10) + '0');
}

_putchar((ftens % 10) + '0');
}
_putchar('\n');
}
}
