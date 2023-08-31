#include "main.h"
#include <stdio.h>
/**
* clear_bit - function sets bit to 0
* @n: number to set to 0
* @index: index to 0
* Return: 1 if it worked or -1 if error occurs
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
