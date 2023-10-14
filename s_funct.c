#include "main.h"

/**
 * s_funct - function to print a string to stdout
 * @catalog: va_list of arguments
 * Return: 0
 */
int s_funct(va_list catalog)
{
	int j = 0;
	char *str = va_arg(catalog, char*);

	if (!str)
		str = "(null)";

	if (*str == '\0')
		return (0);

	for (; *str; str++, j++)
		_putchar(*str);
	return (j);
}
