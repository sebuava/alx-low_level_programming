#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, and a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * nums = x and index = y
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;

	va_start(x, n);
	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(x, int));
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}

