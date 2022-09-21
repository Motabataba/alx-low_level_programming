#include "main.h"

/**
 * _strcmp - compare sizes
 * @s1: param 1
 * @s2: param 2
 *
 * Return: -15 or 15 or 0
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
