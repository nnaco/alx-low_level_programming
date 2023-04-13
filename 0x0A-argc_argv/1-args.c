#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @agrc: number of arguments
 * @agrv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
