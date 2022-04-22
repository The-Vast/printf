#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - struct of format specifier
 * @spec: format character
 * @func: function for conversion
 */

typedef struct specifier
{
	char *spec;
	int (*func)(va_list);
} formatSpec;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*func_getter(char x))(va_list args);

#endif
