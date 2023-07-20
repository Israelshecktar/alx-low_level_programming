#include "main.h"

/**
 * _isdigit - watchout of digits
 * @c: is the charater to be checked
 * Return: 1 for digit character or 0 for otherwise
*/

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
