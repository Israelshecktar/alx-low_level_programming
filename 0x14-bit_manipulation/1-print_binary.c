#include "main.h"
#include <stdio.h>
/**
* print_binary - function prints the binary representation of a number
* @n: representation of numbers
* Return: 0 success
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
