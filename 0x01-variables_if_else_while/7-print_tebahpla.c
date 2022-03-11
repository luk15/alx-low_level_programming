#include <stdio.h>
/**
 * main - main
 * @c - var of type char
 *
 * Return: 0 success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
