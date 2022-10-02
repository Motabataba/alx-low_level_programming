#include "main.h"

/**
 * _memset - fills the first b bytes
 *@s:  array
 *@b: item to be filled in an array
 *@n: by bytes
 *
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
