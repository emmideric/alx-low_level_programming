#include <stdio.h>

/**
 * main - Entry pint
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
	putchar ('\n');
	return (0);
}
