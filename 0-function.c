#include "main.h"

/**
 * print_char - function that Print character
 * @args: argument
 *
 * Return: 1
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);

}

/**
 * print_str - function that Print string
 * @str: variable va_list
 *
 * Return: result
 */
int print_str(va_list str)
{
	char *s;
	int i;

	s = va_arg(str, char*);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
	}
	return (i);
}
