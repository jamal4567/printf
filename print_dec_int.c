/**
 * print_dec_int - print numbers
 * @nb: arguments
 *
 * Return: count
 */
int print_dec_int(va_list nb)
{

	long int n;
	int count, variabl, b;

	count = 0;
	n = va_arg(n, int);

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
		count++;
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(number + 48);
		count++;
	}
	if (n > 9)
	{
		b = 10;

		while (n / b > 9)
		{
			b *= 10;
		}

		while (b > 0)
		{
			variabl = n / b;
			n = n % b;
			_putchar(variabl + 48);
			b = b / 10;
			count++;
		}
	}
	return (count);
}
