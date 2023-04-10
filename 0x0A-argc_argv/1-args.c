#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: array of arguments
 * @argc: numnber of arguments
 * Return: Always 0n (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
