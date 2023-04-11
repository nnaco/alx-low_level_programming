#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int d;

d = _isalpha('H');
_putchar(d + '0');
d = _isalpha('o');
_putchar(d + '0');
d = _isalpha(108);
_putchar(d + '0');
d = _isalpha(';');
_putchar(d + '0');
_putchar('\n');
return (0);
}
