#include <stdio.h>

/**
 * main - entry
 *
 *Return: always 0
 */
int main(void)
{
int i = 0;
int j = 1;
while (i < 9)
{
for (j = 1; j < 10; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i == 8 && j == 9)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
