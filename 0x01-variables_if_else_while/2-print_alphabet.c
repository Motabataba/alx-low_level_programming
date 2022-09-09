#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alpha_B = 'a';
while (alpha_B <= 'z')
{
putchar(alpha_B);
if (alpha_B == 'z')
{
putchar('\n');
}

alpha_B++;
}
return (0);
}
