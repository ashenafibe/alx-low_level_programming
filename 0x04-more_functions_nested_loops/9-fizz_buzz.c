#include <stdio.h>
#include "main.h"
/**
 * main - program return number of fizz
 *
 * Return:0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{ 
			printf("%c", "FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("%c", "Fizz ");
		}
		else if (n % 3 == 0)
		{
			printf("%c", "Buzz ");
		}
		else 
		{
			printf("%d", n);
		}
		printf(' ');
		n++;
	}
}

