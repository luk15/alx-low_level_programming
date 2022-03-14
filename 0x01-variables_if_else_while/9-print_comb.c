#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on succes
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '9')
		{
		putchar(i);
		}
		else
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
