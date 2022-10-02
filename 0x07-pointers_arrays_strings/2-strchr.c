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
int k = 0;
while (s[i])
{
i++;
}

while (k <= i)
{

if (s[k] == c)
{
s = s + k;
return (s);
}

k++;

}

return ('\0');
}
