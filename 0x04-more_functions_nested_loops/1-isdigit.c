#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: input var
 *
 * Return: 1 if success 0 if fail
 */
int _isdigit(int c)
{
	int i = 0;
	char digit = '0';

	for (; digit <= '9'; digit++)
	{
		if (digit == c)
		{
			i = 1;
			break;
		}
	}
	return (i);
}
