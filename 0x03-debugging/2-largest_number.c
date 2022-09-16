#include "main.h"

/**
* largest_number - return
* @a: first_integer
* @b: second_integer
* @c: third_integer
* Return: largest number
*/

int largest_number(int a,int b, int c)
{
	int largest;
	
	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{	
		largest = b;
	}	
	else
	{	
		largest = c;
	}
	return (largest);
}