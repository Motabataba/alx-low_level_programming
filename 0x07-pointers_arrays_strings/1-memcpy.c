#include "main.h"

/**
 * _memcpy - check code
 *@dest: to be appended
 *@src: to be copied from
 *@n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
