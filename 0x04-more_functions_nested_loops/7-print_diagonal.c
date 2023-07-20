#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: inputs variables
 * Return: void
 */

void print_diagonal(int n)
{
	int l, k;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		for (k = 0; k < l; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
