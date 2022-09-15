#include "main.h"

/**
 * _isdigit - check if its digit
 * @c: the agruments
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
int k;
if (c >= '0' && c <= '9')
k = 1;
else
k = 0;

return (k);
}
