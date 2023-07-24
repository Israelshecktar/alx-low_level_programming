#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int sum = 0;
	int p;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	s--;
	for (p = sum; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
