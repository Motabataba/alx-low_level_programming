#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets
 *
 */

void print_alphabet_x10(void)
{
int counter = 'a';
int i = 0;

for (i = 0; i < 10; i++)
{
for (counter = 'a'; counter <= 'z'; counter++)
{
_putchar(counter);
}
_putchar('\n');
}
}
