#include <stdio.h>

/**
 * main - cehck code
 *
 * Return: 0 on success
 */

int main(void)
{
int n;
for (n = 0; n <= 100; n++)
{
if (n % 5 == 0 && n % 3 == 0)
{
printf("FizzBuzz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", n);
}

printf(" ");
}
printf("\n");
return (0);
}
