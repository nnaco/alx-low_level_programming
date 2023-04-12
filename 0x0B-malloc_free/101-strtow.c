#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
char **x, *y;
int i, c = 0, len = 0, words, r = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
x = (char **) malloc(sizeof(char *) * (words + 1));
if (x == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (r)
{
end = i;
y = (char *) malloc(sizeof(char) * (c + 1));
if (y == NULL)
return (NULL);
while (start < end)
*y++ = str[start++];
*y = '\0';
x[c] = y - r;
c++;
r = 0;
}
}
else if (r++ == 0)
start = i;
}
x[c] = NULL;
return (x);
}
