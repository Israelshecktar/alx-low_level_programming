#include "main.h"

/**
 * print_most_numbers - prints most digits from 0-9
 * Return: void
*/

void print_most_numbers(void)
{
char e;
	for (e = '0'; e <= '9'; e++)
{
	if (!(e == '2' || e == '4'))
		_putchar(e);
}
_putchar('\n');
}
