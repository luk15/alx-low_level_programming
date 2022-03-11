#include <stdio.h>
/**
 * main - main function
 * @c - var of type char
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
