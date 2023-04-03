#include "main.h"

/**
 * Entry - fill a block of memory with a specific value
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
