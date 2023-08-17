#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function sums up deffrent arguments
 * @n: integers to be summed
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)

		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
