#include "main.h"
/**
 * _printf - custom printf function to print formatted strings
 * @format: format string
 * @...: variable arguments
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int tally = 0;
	va_list catalog;
	const char *pattern;

	if (format == NULL)
		return (-1);
	pattern = format;

	if ((pattern[0] == '%' && !pattern[1]) || !pattern)
		return (-1);
	if ((pattern[2] && pattern[0] == '%' && pattern[1] == ' '))
		return (-1);

	va_start(catalog, format);

	for (; *pattern; pattern++)
	{
		if (*pattern == '%')
		{
			pattern++;
			if (_search(*pattern))
				tally += select_funct(*pattern)(catalog);
			else if (*pattern == '%')
			{
				tally += _putchar('%');
				tally += _putchar(*pattern);
				continue;
			}
		}
		else
			tally += _putchar(*pattern);
	}
	va_end(catalog);
	return (tally);
}
