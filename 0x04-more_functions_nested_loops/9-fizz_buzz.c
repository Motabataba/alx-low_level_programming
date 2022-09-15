#include <stdio.h>

/**
 * main - cehck code
 *
 * Return: 0 on success
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 5 == 0) && (n % 3 == 0))
{
printf("FizzBuzz ");
}
else if (n % 5 == 0)
{
if (n != 100)
{
printf("Buzz ");
}
else
{
printf("Buzz");
printf("\n");
}
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", n);
}

}

return (0);
}
