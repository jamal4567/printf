#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct types - specifier structure
 * @p: pointer
 * @func : function pointer
 */
typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list str);
int (*handl_spicifier(const char fm))(va_list);
int print_dec_int(va_list nb);
int print_binary(va_list num);
int print_unsigned(va_list num);
int print_octal(va_list args);
int print_hex(unsigned int nb1, unsigned int nb2, char c);
int hex_lower(va_list args);
int hex_upper(va_list args);
int _rot13(va_list args);

#endif /* Holberton_h */
