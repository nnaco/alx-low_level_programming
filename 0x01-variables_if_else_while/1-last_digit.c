#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -The variable n will store a different value every
 *time you run this program.
 *
 * Return:returns 0
 */

int main(void)
{
int last_digit;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

printf("Last digit of %d is %d ", n, (last_digit));
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
