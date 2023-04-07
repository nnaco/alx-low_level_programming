#include "main.h"

int is_prime(int, int)

/**
 * _is_prime_number - prints prime numbers
 * @n: input
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_Prime(int n, int i)
{
  if (n <= 1)
  {
    return 0;
  }
  
  if (i == 1)
  {
    return 1;
  }
  
  if (n % i == 0)
  {
    return 0;
  }
  
  return is_Prime(n, i - 1);
}
