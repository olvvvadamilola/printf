#include "main.h"

/**
 * get_width - get width from format string.
 * @format: format string.
 * @k: pointer to the index of the format string.
 * @catalog: arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *k, va_list catalog)
{
	int x;
	int width = 0;

	for (x = *k + 1; format[x] != '\0'; x++)
	{
		if (is_digit(format[x]))
		{
			width *= 10;
			width += format[x] - '0';
		}
		else if (format[x] == '*')
		{
			x++;
			width = va_arg(catalog, int);
			break;
		}
		else
			break;
	}

	*k = x - 1;

	return (width);
}
