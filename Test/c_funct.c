#include "main.h"

/**
 * c_funct - function to print a string to stdout
 * @args: va_list of arguments
 * Return: 0
*/
int c_funct(va_list args)
{
    int _c = va_arg(args, int);

    return (_putchar(_c) + 0);
}
