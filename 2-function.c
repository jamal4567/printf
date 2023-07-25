#include "main.h"
/**
 *print_unsigned - unsigned int to print
 * @num: arguments
 * Return: number of character printed
 */
int print_unsigned(va_list num)
{
	unsigned int nb;
	int d = 1;
	int count = 0;

	nb = va_arg(num, unsigned int);

	while (nb / d > 9)
		d *= 10;
	while (d != 0)
	{
		count += _putchar(nb / d + 48);
		nb %= d;
		d /= 10;
	}
	return (count);
}
/**
 * print_octal - function to print octal
 * @args: argument
 * Return: number of count
 */
int print_octal(va_list args)
{
	int count = 0, i = 0;
	int *octal;
	unsigned int nb = va_arg(args, unsigned int);
	unsigned int tmp = nb;

	while (nb / 8 != 0)
	{
		nb /= 8;
		count++;
	}
	count++;
	octal = malloc(count * sizeof(int));
	while (i < count)
	{
		octal[i] = tmp % 8;
		tmp /= 8;
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(octal[i] + 48);
	}
	free(octal);
	return (count);
}
/**
 * print_hex - prints to hexadecimal.
 * @nb1: number to print
 *@nb2: base 16
 * @c: upper or lower
 * Return: characyer printed or integer
 */
int print_hex(unsigned int nb1, unsigned int nb2, char c)
{
	unsigned int a = nb1 % nb2;
	unsigned int b = nb1 / nb2;
	char hex;

	if (a > 10)
		hex = (a - 10) + c;
	else
		hex = a + 48;
	if (b == 0)
	{
		return (_putchar(hex));
	}
	if (b < nb2)
	{
		if (b > 10)
			return (_putchar(b - 10 + c) + _putchar(hex));
		return (_putchar(b + 48) + _putchar(hex));
	}
	return (print_hex(b, nb2, c) + _putchar(hex));
}
/**
 * hex_lower - hexa on lowercase
 * @args: argument
 * Return: character printed
 */
int hex_lower(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 16, 97));
}
/**
 * hex_upper - hexa on uppercase
 * @args: argument
 * Return: character printed
 */
int hex_upper(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 16, 65));
}
