#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @seperator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!seperator)
			printf("%d", va_arg(params, int));
		else
			printf("%d%s", va_arg(params, int), seperator);
	}

	if (n)
		printf("%d\n", va_arg(params, int));
	else
		printf("\n");

	va_end(params);
}
