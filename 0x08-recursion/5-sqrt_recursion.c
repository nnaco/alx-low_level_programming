#include "main.h"
/**
 * _sqrt_recursion - prints the natural square root of a number.
 * @n: number to calculate the square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
	return n;
	}
    int i = 1, result = 1;
    while (result <= n) 
{
	i++;
	result = i * i;
}
return _sqrt_recursion(n - (i -1) * (i - 1));
}
