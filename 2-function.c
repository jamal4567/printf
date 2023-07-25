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

	nb = va_arg(nb, unsigned int);

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
 * print_Hex - prints to hexadecimal.
 * @nb: number to print
 * @c: upper or lower
 * Return: count
 */
int print_Hex(unsigned int nb, char c)
{
	unsigned int nb2;
	int i, j, w, count = 0;
	char *hex;

	for (nb2 = nb; nb2 != 0; count++, num2 /= 16)
	;

	hex = malloc(count);
	i = 0;
	while (nb != 0)
	{
		w = nb % 16;
		if (w < 10)
			hex[i] = w + 48;
		else
			hex[i] = w - 10 + c;
		nb /= 16;
	}
	j = j - 1;
	while (j >= 0)
	{
		_putchar(hex[j]);
		j--;
	}
	free(hex);
	return (count);
}
