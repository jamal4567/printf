#include "main.h"

/**
 * _rot13 - prints rot13
 * @args: argument
 * Return: count
 */
int _rot13(va_list args)
{
	int i, count;
	char *str;

	count = 0;
	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) ||
		    (str[i] >= 65 && str[i] <= 90))
		{
			if ((str[i] >= 110 && str[i] <= 122) ||
			    (str[i] >= 78 && str[i] <= 90))
				count += _putchar(str[i] - 13);
			else
				count += _putchar(str[i] + 13);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
