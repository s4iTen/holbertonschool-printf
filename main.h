#ifndef HEADERFILE_H_
#define HEADERFILE_H_
#include<stdarg.h>
#include<stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

typedef struct code_format
{
	char *ss;
	int (*f)(va_list);
} code_f;

#endif