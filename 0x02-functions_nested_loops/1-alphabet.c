#include "main.h"
/**
 * print_alphabet - doesnot take any arguments
 * the function has no return value
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
