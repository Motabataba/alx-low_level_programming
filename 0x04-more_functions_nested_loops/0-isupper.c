#include "main.h"

/**
 * _isupper - checks upper case
 * @c: letter checked
 *
 * Return: 1 is uppe and 0 otherwise
 */
int _isupper(int c)
{
int k;

if (c >= 'A' && c <= 'Z')
k = 1;
else
k = 0;

return (k);

}
