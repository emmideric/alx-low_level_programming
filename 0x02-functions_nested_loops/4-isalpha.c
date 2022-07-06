#include <ctype.h>
#include "main.h"

/**
 * _isalpha - takes a character as an argument
 * @c: is the argument
 *
 * Return: 1 if c is a letter, lowercase or uppercase. Or 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
