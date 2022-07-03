#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	long r;

	for (i = 0; i < 16; i++)
	{
		r = i % 16;
		if (r < 10)
			putchar(48 + r);
		else
			putchar(87 + r);
	}
	putchar('\n');
	return (0);
}
