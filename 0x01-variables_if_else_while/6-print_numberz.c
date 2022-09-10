#include <stdio.h>

/**
 * main - ebtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar((i % 10) + '0');

if (i == 9)
putchar('\n');
i++;
}
return (0);
}
