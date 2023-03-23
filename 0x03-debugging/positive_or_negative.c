#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - to generate positive or negative results
 * @i: integer
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
