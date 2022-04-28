#include "main.h"

/**
 * my_sqrt - returns the natural square of a number
 * @i: input
 * @j: input
 * Return: Always 0
 */

int my_sqrt(int j, int i)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i *  i >  j)
	{
		return (-1);
	}
	return (my_sqrt(j, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root af a number
 * @n: input
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 0));
}
