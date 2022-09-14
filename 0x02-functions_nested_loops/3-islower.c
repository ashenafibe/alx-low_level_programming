#include "main.h"
/**
 * _islower -> check acharacter is lower case
 * @c : is parameter
 *
 * Return:returns 0 and 1 depends on the condition
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
