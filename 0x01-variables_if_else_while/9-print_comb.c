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

	for (i = 0; i < 10; i++)
	{
		r = i % 10;
		if (r < 10)
		{
			putchar(48 + r);
			if (!(r == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
