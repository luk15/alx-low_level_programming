#include <stdio.h>
/**
 * main - main function
 * @c - var of type char
 * @C - var of type char
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
