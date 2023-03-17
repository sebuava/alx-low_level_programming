#include <stdio.h>
#include <stdlib.h>
/**
 *  main - returns both lower and upper case letters
 *  Return: Alwaya 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
