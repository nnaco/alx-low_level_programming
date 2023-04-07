#include "main.h"
#include <math.h>
/**
 * _is_prime_number - prints prime numbers
 * @n: input
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_Prime_number(int n)
{
  int i;

  if (n <= 1)
  {
    return (0);
  }

  for (i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return (0);
    }
  }
  return (1);
}
