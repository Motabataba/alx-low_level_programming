#include "main.h"

/**
 * swap_int - swaps
 *@a: argument 1
 *@b: argument 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{

int x;
int y;
x = *a;
y = *b;

*a = y;
*b = x;

}
