#include "main.h"

/**
 * _strcat -  concatonates dest to src
 * @dest: to be copied to source
 * @src: to be copied to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_L = 0;
	int src_L = 0;

	int k;

	for (k = 0; dest_L != '\0'; k++)
		dest_L++;
	for (k = 0; src_L != '\0'; k++)
		src_L++;
	for (k = 0; k <= src_L ; k++)
		dest[dest_L + k] = src[k];
return (dest);
}
