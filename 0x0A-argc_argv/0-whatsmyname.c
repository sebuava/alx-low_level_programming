#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name followed by a new line.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
