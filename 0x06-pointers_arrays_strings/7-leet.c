#include "main.h"

/**
 * leet - check code
 *@s: agrument
 *
 * Return: string
 */

char *leet(char *s)
{
int i = 0;
int k;
int n = 5;

char rp1[5] = {'a', 'e', 'o', 't', 'l'};
char rp2[5] = {'A', 'E', 'O', 'T', 'L'};
char rnum[5] = {'4', '3', '0', '7', '1'};

while (s[i])
{
k = 0;
while (k < n)
{
if (s[i] == rp1[k] || s[i] == rp2[k])
s[i] = rnum[k];

k++;
}

i++;
}

return (s);
}
