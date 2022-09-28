#include "main.h"

/**
 * factorial - Print factorial of function
 * @n: number that used find it factorial
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));

	}
}
