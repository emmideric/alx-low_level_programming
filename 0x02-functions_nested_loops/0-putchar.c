#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char p[8] = "_putchar";
	char t;

	for (i = 0; i < 8; i++)
	{
		t = p[i];
		 _putchar(t);
	}
	putchar('\n');
	return (0);
}
