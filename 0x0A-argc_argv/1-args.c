#include "main.h"
#include <stdio.h>

/**
 * main - Prints the no of args to be used
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
