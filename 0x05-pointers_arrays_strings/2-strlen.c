#include "main.h"

/**
 * _strlen - length
 * @s: argument
 *
 * Return: size or length
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
