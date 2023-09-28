#include "main.h"

/**
 * is_prime_number - says if an integer is a
 * prime number or it is not a prime number
 * or if it is not a prime number
 *
 * Return: 1 (one) if n is a prime number
 * 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 *  actual_prime - calculates if a number is a prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if it is not;
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
