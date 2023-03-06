#include "main.h"
int root_finder(int x, int root);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of the given number
 */
int _sqrt_recursion(int n)
{
	return (root_finder(1, n));
}
/**
 * root_finder - calculates the square root of a number
 * @x: possible sq
 * @root: square root
 * Return: square root
 */
int root_finder(int x, int root)
{
	if (x > root)
		return (-1);
	if (x * x == root)
		return (x);
	return (root_finder(x + 1, root));
}
