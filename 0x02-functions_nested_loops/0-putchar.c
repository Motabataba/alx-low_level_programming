#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{

char to_print[8] = "_putchar";
int length = 8;
int counter = 0;

while (counter < length)
{
_putchar(to_print[counter]);
counter++;
}
_putchar('\n');
return (0);
}
