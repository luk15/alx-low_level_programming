#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: defines the character
 *
 * Return: 1 on success 0 on failure
 */
int _isalpha(int c)
{
	int i = 0;
	char lower = 'a', upper = 'A';

	while (lower <= 'z' || upper <= 'Z')
	{
		if (lower == c || upper == c)
		{
			i = 1;
		}
		lower++;
		upper++;
	}
	return (i);
}
