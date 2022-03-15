#include "main.h"

/**
 * _islower - returns 1 when c is lower 0 when c is not lower
 * @c: argument
 *
 * Return: returns 1 on success and 0 on failure
 */
int _islower(int c)
{
	int i = 0;
	char lower  = 'a';

	while (lower <= 'z')
	{
		if (lower == c)
		{
			i = 1;
		}
		lower++;
	}
	return (i);
}
