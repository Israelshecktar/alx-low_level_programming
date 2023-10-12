#include <stdio.h>

/**
 * is_palindrome - checks if a number is a palindrome
 * @n: number to check
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(int n)
{
	int reversed = 0, remainder, original = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	return (original == reversed);
}

/**
 * main - finds the largest palindrome made from the product of two 3-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int largest_palindrome = 0;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			int product = i * j;

			if (product <= largest_palindrome)
				break;
			if (is_palindrome(product))
				largest_palindrome = product;
		}
	}

	/* Save the result to a file */
	FILE *fp = fopen("102-result", "w");

	if (fp != NULL)
	{
		fprintf(fp, "%d", largest_palindrome);
		fclose(fp);
	}

	return (0);
}
