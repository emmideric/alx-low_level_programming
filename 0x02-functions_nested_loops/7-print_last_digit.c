#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints out the last digit of a number
 * @a: is the negative or positive argument
 *
 * Return: is the last digit of the argument
 */
int print_last_digit(int a)
{
	int i;

	i = (abs(a)) % 10;
	_putchar((i % 10) + '0');
	return (i);
}
