#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
