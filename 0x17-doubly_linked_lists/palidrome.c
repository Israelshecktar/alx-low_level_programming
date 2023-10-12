#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int n) {
	int reversed = 0, remainder, original = n;
	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	return original == reversed;
}

int main() {
	int i, j, largest_palindrome = 0;
	for (i = 999; i >= 100; i--) {
		for (j = 999; j >= 100; j--) {
			int product = i * j;
			if (product <= largest_palindrome) {
				break;
			}
			if (is_palindrome(product)) {
				largest_palindrome = product;
			}
		}
	}

	printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", largest_palindrome);
	return 0;
}
