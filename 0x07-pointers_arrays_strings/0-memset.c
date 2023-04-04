#include "main.h"
/**
 * *_memset -  fills memory with a constant byte
 * @s: starting address
 * @b: the value to copy
 * @n: number of times to copy b
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for(; n > 0; a++)
{
s[a] = b;
n--;
}
return(s);
}
