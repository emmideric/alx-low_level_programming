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
 * print_aplhabet - the function will not take any arguments
 * when called it will print out the aphabet using _putchar function
 * Return: nothing will be returned
 */
void print_alphabet(void);

/**
 * print_aplhabet_x10 - the function takes no arguments
 * When called it will print out the alphabet 10 times using _putchar function
 *
 * Return: nothing to be returned
 */
void print_alphabet_x10(void);

/**
 * _islower - the function will take one argument
 * @int: the argument will be of type integer
 *
 * Return: Returns 1 if c is lowercase and returns 0 if not.
 */
int _islower(int);

/**
 * _isalpha - the function will take one argument
 * @int: will be the argument
 *
 * Return: is 1 if c is a letter, lowercase or uppercase 
 * otherwise it will return a 0
 */
int _isalpha(int);
