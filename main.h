#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define buffer_size 1024

/**
 * _list - structure to hold a list of functions
 * @_char: character to match
 * @_funct: function to call
 * Return: 0
 * =======
 * _lst_array - array of _lst structures(renamed data type)
*/
typedef struct _list
{
    char _char;
    int (*_funct)(va_list args);
} list_array;

int _printf(const char *format, ...);
int _putchar(char _a);
int c_funct(va_list args);
int s_funct(va_list args);
int (*select_funct(char s))(va_list args);


#endif