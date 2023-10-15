#include "main.h"
/**
 * _printf - custom printf function to print formatted strings
 * @format: format string
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int tally = 0;
	const char *frmt;
	va_list catalog;

	if (format == NULL)
		return (-1);
	frmt = format;

	if ((frmt[0] == '%' && !frmt[1]) || !frmt)
		return (-1);
	if ((frmt[2] && frmt[0] == '%' && frmt[1] == ' '))
		return (-1);

	va_start(catalog, format);

	for (; *frmt; frmt++)
	{
		if (*frmt == '%')
		{
			frmt++;
			if (_search(*frmt))
				tally += select_funct(*frmt)(catalog);
			else if (*frmt == '%')
			{
				tally += _putchar('%');
			}
			else
			{
				tally += _putchar('%');
				tally += _putchar(*frmt);
				continue;
			}
		}
		else
			tally += _putchar(*frmt);
	}
	va_end(catalog);
	return (tally);
}
