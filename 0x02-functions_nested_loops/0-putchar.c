#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function prototype that will take one argument
 * @char: the argument will be of type character
 *
 * Return: ASCII integer value of the argument..
 */
int _putchar(char);

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;
	char p[10] = "_putchar";
	char t;

	/*loop through the array to print each character*/
	for (int i = 0; i < 10; i++)
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
