#include <stdio.h>
#include "main.h"
/**
* get_bit - function returns the value of bits
* @n: the number to get bits
* @index: index starting from 0 of the bit we want to get
* Return: the value of the bit or -1 if error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) != 0);
}
