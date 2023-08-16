#include <stdio.h>

/**
 * print_name - Function prints name
 * @name: first name to be printed
 * @f: holds function to the second name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print - second function that prints name
 *
 * @name: prints name
 * Return: Nothing
 */
void print(char *name)
{
	printf("Name: %s\n", name);
}
