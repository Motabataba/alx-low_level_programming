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
if (alpha_B == 'z')
{
putchar(alpha_B);
putchar('\n');
}
else
{
putchar(alpha_B);
}
alpha_B++;
}
return (0);
}
