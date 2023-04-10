#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;
	int l;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (k = 1; k < argc; k++)
	{
		char *num = argv[k];

		for (l = 0; num[l] != '\0'; l++)
		{
			if (!isdigit(num[l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}

	printf("%d\n", sum);
	return (0);
}
