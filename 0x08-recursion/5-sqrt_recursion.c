#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - prints the square root
 * @n: value to find square root
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recurses to find the natural square root of a number
 * @n: input value
 * @i: iterator
 *
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	int s = i * i;

	if (s > n)
		return (-1);
	if (s == n)
		return (i);
	return (_sqrt(n, i + 1));
}
