#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success
*/
int main(void)
{
	char b;

	int i;

	b = 'a';
	i = 0;

	while
		(i < 10) {
			putchar(i + '0');
		       i++;
		}
	while
		(b <= 'f') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
