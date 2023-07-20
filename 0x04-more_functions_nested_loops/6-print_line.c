#include "main.h"

/**
 * print_line - this functin prints straight lines
 * @n: number of times
 * Return: Always o success
 */

void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
