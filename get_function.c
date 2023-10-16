#include "main.h"

/**
 * ft_putchar - prints a character on stdout
 * @args: list of arguments passed to the function
 * Return: number of printed char.
*/
int ft_putchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

/**
 * ft_putnbr - prints an integer
 * @args: list of arguments passed to the function
 * Return: number of printed char
 */
int ft_putnbr(va_list args)
{
	int n, temp, index;
	int numChars = 0;
	char buffer[12];

	n = va_arg(args, int);
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		buffer[0] = '-';
		numChars++;
		if (n == INT_MIN)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		n *= -1;
	}
	temp = n;
	while (temp > 0)
	{
		temp /= 10;
		numChars++;
	}
	index = numChars - 1;
	while (n > 0)
	{
		buffer[index] = n % 10 + 48;
		n /= 10;
		index--;
	}
	buffer[numChars] = '\0';
	write(1, buffer, numChars);

	return (numChars);
}

/**
 * ft_putstr - prints a string on stdout
 * @args: list of argument containing the string
 * Return: number of chars of the string
*/
int ft_putstr(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}	
	for (count = 0; str[count]; count++)
		write(1, &(str[count]), 1);
	return (count);
}

/**
 * ft_print_binary - functions takes integer and prints it in binary format
 * @args: list of arguments that contains interger
 * Return: number of chars printed
*/
int ft_print_binary(va_list args)
{
	unsigned int num;
	int bin = 0, rem = 0, place = 1;
	int numChar = 0;

	num = va_arg(args, unsigned int);
	while (num)
	{
		rem = num % 2;
		num = num / 2;
		bin = bin + (rem * place);
		place = place * 10;
		numChar++;
	}
	ft_putnbrs(bin);
	return (numChar);
}

/**
 * ft_print_percent - function that prints '%'
 * @args: list of arguments
 * Return: 1.
*/
int ft_print_percent(va_list args)
{
	(void)args;
	return (ft_putch('%'));
}
