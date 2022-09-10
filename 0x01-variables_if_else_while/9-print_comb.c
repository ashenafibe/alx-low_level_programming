#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print  base 16 numbers
 *
 * description:using the main function print the number
 * is base 16
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++) 
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
  
	putchar('\n');
	return (0);
}
