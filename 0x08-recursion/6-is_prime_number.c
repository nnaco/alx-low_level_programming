#include "main.h"

int _prime(int, int);
/**
 * is_prime_number - prints prime numbers
 */
int is_prime_number(int n)
{
return (_prime(n, 1));
}

/**
 * is_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int _Prime(int n, int i)
{
if (n <= 1)
return (0);
if (i == 1)
return (1);
if (n % i == 0 && i > 1)
return (0);
if ((n /i) < i)
	return(1);
return (_Prime(n, i + 1));
}
