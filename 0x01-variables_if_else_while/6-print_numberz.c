#include <stdio.h>
/**
 * main - main function
 * @i - defines my int var
 *
 * Return: 0 success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
