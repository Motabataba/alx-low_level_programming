#include "main.h"

/**
 * _strncpy - check code
 * @dest: param 1
 *@src: param 2
 *@n: param 3
 *
 * Return: pointert
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
