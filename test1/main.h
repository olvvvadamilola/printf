#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define buffer_size 1024

/**
 * _list - structure to hold a list of functions
 * @chr: character to match
 * @_funct: function to call
 * Return: 0
 * =======
 * _lst_array - array of _lst structures(renamed data type)
*/
typedef struct _list
{
    char chr;
    int (*_funct)(va_list catalog);
} list_array;

int _printf(const char *format, ...);
int _putchar(char _a);
int c_funct(va_list catalog);
int s_funct(va_list catalog);
int (*select_funct(char s))(va_list catalog);
int _search(char letter);


#endif
