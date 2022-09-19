#include "main.h"

/**
 * rev_string - reverse
 *@s: argument
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
int i = 0;
int n;
int k = 0;
char m = s[0];
while (s[i] != '\0')
{
i++;
}

n = i - 1;

while (k < n)
{
m = s[k];
s[k] = s[n];
s[n] = m;
k++;
n--;

}
}
