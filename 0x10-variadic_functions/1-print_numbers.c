#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function prints numbers
 * @separator: first variable
 * @n: number
 * Return: 0 success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list args;

	va_start(args, n);

	for (y = 0; y < n; y++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && y < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
