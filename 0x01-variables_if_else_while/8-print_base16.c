#include <stdio.h>
/**
 * main - main
 * @i - int var
 *
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
