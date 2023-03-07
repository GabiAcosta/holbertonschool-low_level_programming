#include "main.h"
int prime_number_checker(int n, int div);
/**
 * is_prime_number - returns a value if the input integer is a prime number
 * or not.
 * @n: number
 * Return: 1 if the number is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prime_number_checker(n, 2));
}
/**
 * prime_number_checker - checks if the given number is a prime number
 * @n: number
 * @div: divisor
 * Return: 1 if the number is a prime number, 0 if not
 */
int prime_number_checker(int n, int div)
{
	if (n / 2 == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_number_checker(n, div + 1));
}
