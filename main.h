#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct list - structure to hold a list of functions
 * @_char: character to match
 * @_funct: function to call
 * Return: 0
 * =======
 * _lst_array - array of _lst structures(renamed)
 */
typedef struct list
{
	char _char;
	int (*_funct)(va_list catalog);
} list_array;

int _printf(const char *format, ...);
int _putchar(char _a);
int c_funct(va_list catalog);
int s_funct(va_list catalog);
int (*select_funct(char f))(va_list catalog);
int _search(char letter);
int _printnumber(long n, int t);


#endif
