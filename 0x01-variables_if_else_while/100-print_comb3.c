#include <stdio.h>

/**
 * main - entry
 *
 *Return: always 0
 */
int main(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
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

}
putchar('\n');
return (0);
}
