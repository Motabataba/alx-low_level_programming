#include "main.h"

/**
 *_strncat - check main
 *@dest: argument 1
 *@src: argument 2
 *@n: size of srcx
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{

int i;
int dest_size = 0;
while (dest[dest_size] != '\0')
dest_size++;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_size + i] = src[i];
}
dest[dest_size + i] = '\0';

return (dest);
}
