#include "main.h"

/**
 * print_alphabet_x10 - the function takes no arguments
 * it uses a while loop to print out the results of the for loop
 * 10 times on std output.
 *
 * Return: there is no return value
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
