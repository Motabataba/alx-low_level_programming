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
int i;
int n = 0;

while (dest[n])
n++;


for (i = 0; src[i] != '\0'; i++)
{
dest[n] = src[i];
n++;
}
dest[n] = '\0';
return (dest);
}
