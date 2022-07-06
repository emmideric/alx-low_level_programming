#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c, i;
	char p[10] = "_putchar";
	char t;

	/*loop through the array to print each character*/
	for (i = 0; i < 10; i++)
	{
		t = p[i];
		c = _putchar(t);
		putchar(c);
	}
	putchar('\n');
	return (0);
}

/**
 * _putchar - returns the ASCII integer equivalent value of a character
 * @c: the character to typecast to its ASCII integer value
 *
 * Return: the ASCII integer equivalent of c
 */
int _putchar(char c)
{
	return ((int)c);
}
