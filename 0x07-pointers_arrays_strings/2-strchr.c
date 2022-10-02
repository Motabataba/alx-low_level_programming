#include "main.h"

/**
 *_strchr -  check code
 *@s: arg 1
 *@c: arg 2
 *
 * Return:  pointer
 */

char *_strchr(char *s, char c)
{

int i = 0;

while (s[i])
{
if (s[i] == c)
{
s++;
break;
}

if (s[i + 1] == '\0')
return ('\0');

i++;
s++;
}
return (s);
}
