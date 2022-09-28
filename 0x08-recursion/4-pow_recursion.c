#include "main.h"

/**
 * _pow_recursion - calculate exponential value
 * @x: base of exponential
 * @y: power of expontial
 *
 * Return: Expontial vlue
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1)
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
