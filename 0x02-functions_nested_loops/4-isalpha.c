#include "main.h"

/**
 * _isalpha -  check code
 * @c: character to chech whether is lapha
 *
 * Return: 1 if alpha, 0 is false
 */

int _isalpha(int c)
{

if (c >= 'A' && c <= 'z')
return (1);
else
return (0);

}
