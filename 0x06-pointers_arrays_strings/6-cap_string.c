#include "main.h"

/**
 *cap_string - check main
 *@s: argument
 *
 * Return: character
 */

char *cap_string(char *s)
{
char spt[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, '(', ')', '{', '}'};
int spt_len = 0;
int i;
int k = 0;

while (spt[spt_len] != '\0')
spt_len++;

while (s[k])
{
i = 0;
while (i < spt_len)
{

if ((k == 0 || s[k - 1] == spt[i]) && (s[k] >= 'a' && s[k] <= 'z'))
s[k] = s[k] - 32;

i++;
}
k++;
}

return (s);
}
