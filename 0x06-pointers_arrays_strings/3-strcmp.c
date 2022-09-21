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
int size1 = 0;
int size2 = 0;
int val;

while (s1[size1])
size1++;

while (s2[size2])
size2++;

if (size1 > size2)
val = 15;

if (size1 == size2)
val = 0;

if (size1 < size2)
val = -15;

return (val);
}
