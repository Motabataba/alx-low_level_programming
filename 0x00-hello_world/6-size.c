#include <stdio.h>

/**
 * main - print types of variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charSize;
int intSize;
long int longintSize;
long long int longlongintSize;
float floatSize;
printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
printf("Size of a int: %zu byte(s)\n", sizeof(intSize));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintSize));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintSize));
printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));

return (0);
}
