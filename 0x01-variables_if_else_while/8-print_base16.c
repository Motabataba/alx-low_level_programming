#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int letter = 'a';
while (i < 10)
{
putchar((i % 10) + '0');
i++;
}

while (letter <= 'f')
{
putchar (letter);
letter++;
}
putchar('\n');
return (0);
}
