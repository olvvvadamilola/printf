#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print a character
 * @_a: character to print
 *
 * Return: 0
 */
int _putchar(char _a)
{
	write(1, &_a, 1);
	return (1);
}
