#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @agrc: number of arguments
 * @agrv: array of arguments
 * Return: Always 0 
 */
int main(int argc, char *argv[]) 
{
	(void)argv;
    printf("Number of arguments: %d\n", argc - 1);
    return 0;
}
