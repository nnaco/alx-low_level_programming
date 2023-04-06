#include "main.h"
/**
 * _puts_recursion - Prints a string.
 * @s: input
 *
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
