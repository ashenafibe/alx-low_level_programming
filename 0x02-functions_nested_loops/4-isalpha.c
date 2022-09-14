#include "main.h"
/**
 * _islower - a function to check lower case character
 * @c : is parameter
 *
 * Return : 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
