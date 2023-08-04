#include "main.h"

/**
 * _isupper - checks for lowercase characters
 * @c: is the character to be examined
 * Return: 1 for uppercase character nd 0 for lowercase character
*/

int _isupper(int c)

{
	if (c >= 65 && c <= 90) /*according to ASCII*/
	{
		return (1);
	}
	return (0);
}
