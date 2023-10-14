#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define buffer_size 1024

/**
 * _lst - structure to hold a list of functions
 * @_char: character to match
 * @_funct: function to call
 * Return: 0
 * =======
 * _lst_array - array of _lst structures(renamed data type)
*/
struct _list
{
    char _char;
    int (*_funct)(va_list args);
};
typedef struct _list _lst_array;

int _printf(const char *format, ...);
int _putchar(char _a);


#endif