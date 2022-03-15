#include "main.h"

/**
 * print_sign - checks for sign on a number
 * @n: takes int
 *
 * Return: 1 if +ve 0 if -ve -1 if zero
 */
int print_sign(int n)
{
	int i;

	if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
