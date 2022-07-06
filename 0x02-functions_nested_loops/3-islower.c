#include "main.h"
#include <ctype.h>

/**
 * _islower - takes one argument of type integer
 * @c: integer or character that will be checked by islower function
 *
 * Return: is 1 if c is lowercase or 0 if it is not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
