#include "main.h"

/**
 * _abs - entry point
 * @n: n is an integer
 * description: prints the value of an integer
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

