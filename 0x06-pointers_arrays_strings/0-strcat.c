#include "main.h"

/**
 * _strcat - check main
 * @dest: argument
 * @src: srgumrnt
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int n = 0;

while (dest[n] != '\0')
n++;

n = n + 1;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[n + i] = src[i];

dest[n + i] = '\0';
return (dest);
}
