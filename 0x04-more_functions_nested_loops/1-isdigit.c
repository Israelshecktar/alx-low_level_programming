#include "main.h"
/**
 * _isdigit -  checks for a digit
 * @c: is to be inspected
 * Return: always 1 if c is a digit, 0 if c is otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
return (0);
}
