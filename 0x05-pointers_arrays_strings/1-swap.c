#include "main.h"

/**
 * swap_int - the function swap the give number
 * @a: the first number
 * @b:the second number
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
