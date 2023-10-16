#include "main.h"
/**
 * _strncat - concertenates two strings
 * @src: the second variable
 * @n: input value
 * @dest: the second variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int sum;
	int sum2;

	sum = 0;
	while (dest[sum] != '\0')
	{
		sum++;
	}
	sum2 = 0;
	while (sum2 < n && src[sum2] != '\0')
	{
	dest[sum] = src[sum2];
	sum++;
	sum2++;
	}
	dest[sum] = '\0';
	return (dest);
}
