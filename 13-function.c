#include "main.h"
/**
 * print_rev - prints the reversed string
 * @args: arguements
 *
 * Return: number charcaters printed
 */
int print_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int l = 0, i, count = 0;

	while (str[l])
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
