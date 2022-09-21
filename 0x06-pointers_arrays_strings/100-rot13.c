#include "main.h"

/**
 *rot13 - check code
 *@s: argument
 *
 * Return: string
 */
char *rot13(char *s)
{

int i = 0;
int k;
char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != '\0')
{

k = 0;

while (k < 52)
{
if (s[i] == alpha[k])
{
s[i] = rot[k];
break;
}
k++;
}

i++;
}

return (s);
}
