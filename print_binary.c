#include "main.h"

/**
 * ft_print_binary - functions takes integer and prints it in binary format
 * @args: list of arguments that contains interger
 * Return: number of chars printed
*/
int ft_print_binary(va_list args)
{
	unsigned int num;
	int count, len = 0;
	char binary[32]; /* 31 bits + null terminator */

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		len++;
		write(1, "0", 1);
		return (len);
	}
	for (count = 0; num > 0; count++)
	{
		binary[count] = (num % 2) + '0';
		num /= 2;
	}
	count -= 1;
	for ( ; count >= 0; count--)
	{
		write(1, &binary[count], 1);
		len++;
	}
	return (len);
}
