#include "main.h"
/**
 * _printf - custom printf function to print formatted strings
 * @format: format string
 * @...: variable arguments
 * Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    const char *_format;

    if (format == NULL)
        return (-1);
    _format = format;

    if ((_format[0] == '%' && !_format[1]) || !_format)
    return (-1);
    if ((_format[2] && _format[0] == '%' && _format[1] == ' '))
    return (-1);

    va_start(args, format);

    
}




