#include "main.h"
#include <stdio.h>
/**
 * _abs -> the function compute the absolute value
 * @n :the argument of function
 *
 * Return: absolute value of anumber
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
