#include "main.h"

/**
 * _isupper - checks if a chracxter is upper case
 * @c: carrierr integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
