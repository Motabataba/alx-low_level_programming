#include "main.h"

/**
 * print_sign - checks sign
 * @n: the number to  be checked
 *
 */
int print_sign(int n)
{
  int k;
  if (n > 0)
    {
      _putchar('+');
      k = 1;
    }
  else if (n < 1)
    {
      _putchar('-');
      k = -1;
    }
  else if (n == 0)
    {
      _putchar('0');
      k = 0;
    }
  return (k);
}
