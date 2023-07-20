#include "main.h"

/**
 * print_numbers - prints number from 0--9
 * Return: - Always 0 success
*/

void print_numbers(void)

{
	char b;

	for (b = '0'; b <= '9'; b++)

	{
		_putchar(b);
	}
	_putchar('\n');
}
