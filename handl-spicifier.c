#include "main.h"
/**
 **handl_spicifier - check for specifier
 *@fm: character to print
 *
 *Return: 0
 */
int (*handl_spicifier(const char fm))(va_list)
{
	print_f f[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec_int},
		{'i', print_dec_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_Hex},
		{'X', print_Hex},
		{'\0', NULL}
	};

	int i = 0;

	while (f[i].p != '\0')
	{
		if (f[i].p == fm)
		{
			return (f[i].func);
		}
		i++;
	}

	return (0);
}
