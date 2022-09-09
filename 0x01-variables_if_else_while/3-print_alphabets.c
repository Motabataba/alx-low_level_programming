#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase++;
}
while (upperCase <= 'Z')
{
putchar(upperCase);
if (upperCase == 'Z')
putchar('\n');
upperCase++;
}
return (0);
}
