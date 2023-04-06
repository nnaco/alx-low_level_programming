#include "main.h"
/**
 * strlen_inclusion - prints the full length of a string.
 * @s: string's length to be measured
 *
 * Return: lengthof the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s)
	{
		length++;
	length += _strlen_recursion(s+1);
}
return (length);
}
