#include "main.h"
/**
 * _printf - print character
 * @format: character to print
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (handl_spicifier(format[i + 1]) != NULL)
			{
				count += (handl_spicifier(format[i + 1]))(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
