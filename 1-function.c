#include "main.h"

/**
 * print_binary - function that print binary
 * @num: list of numbers
 * Return: count
 */
int print_binary(va_list num)
{
	int count = 0, i;
	int *array;
	unsigned int n = va_arg(num, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + 48);
	}
	free(array);
	return (count);
}
