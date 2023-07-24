#include "main.h"

/**
 * _putchar - Print characteres
 * @c: character
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
