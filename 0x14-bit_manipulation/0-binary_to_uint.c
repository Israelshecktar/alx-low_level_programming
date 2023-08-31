#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - Function converts a binary number to an unsigned integer
* @b: pointer ro the string to be conerted
* Return: the converted number or 0 if there are chars in the string
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int k = 0;

	if (b == NULL)
		return (0);

	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);

		output = output * 2 + (b[k] - '0');
		b++;
	}

	return (output);
}
