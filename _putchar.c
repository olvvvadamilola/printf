#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print a character
 * @_a: character to print
 *
 * Return: 1 on success.
 * -1 on error and errno is set appropriately.
 */
int _putchar(char _a)
{
	return (write(1, &_a, 1));
}
