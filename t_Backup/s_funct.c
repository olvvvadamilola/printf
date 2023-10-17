#include "main.h"

/**
 * s_funct - function to print a string to stdout
 * @catalog: va_list of arguments
 * Return: 0
 */
int s_funct(va_list catalog)
{
	int j = 0;
	char *_str = va_arg(catalog, char*);

	if (!_str)
		_str = "(null)";

	if (*_str == '\0')
		return (0);

	for (; *_str; _str++, j++)
		_putchar(*_str);
	return (j);
}
