#include <stdio.h>

/**
* main - entry point
*
* Return: Aways 0
*/

int main(void)
{

int i = 0;
int j = 0;
int k = 0;

for (i = 0; i < 8; i++)
{
for (j = 1 + i; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
if (i == 7 && j == 8 && k == 9)
continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
