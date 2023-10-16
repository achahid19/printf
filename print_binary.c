#include "main.h"

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
