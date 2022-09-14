#include "main.h"

/**
 * _islower - checks is alphabet is lower ase
 *@c: Ther character to is is lower case
 *
 * Return: 1 if lower or zero if not lower
 */
int _islower(int c)
{
int begin = 'a';
int last = 'z';

if (c >= begin && c <= last)
return (1);
else
return (0);

}
