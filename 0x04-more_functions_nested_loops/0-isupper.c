#include "main.h"

/**
 * _isupper - function to check upper chas
 * @c: input var
 *
 * Return: 1 if success 0 for fail
 */
int _isupper(int c)
{
	int i = 0;
	char upper = 'A';

	for (; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			i = 1;
		}
	}
	return (i);
}
