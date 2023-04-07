#include "main.h"
/**
 * _pow_recursion - returns the value of an integer raised to power another int
 * @x: value to be raised
 * @y: value of power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
