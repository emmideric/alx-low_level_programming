#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	/*Print in uppercase*/
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
