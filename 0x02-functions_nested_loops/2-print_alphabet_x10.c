#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * @i - creates the space to print the x10 alphabets
 * @c- var cahr
 */
void print_alphabet_x10(void)
{
	char i = '0', c;

	while (i <= '9')
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
