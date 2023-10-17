#include "main.h"

/**
 * ft_print_binary - functions takes integer and prints it in binary format
 * @args: list of arguments that contains interger
 * Return: number of chars printed
*/
int ft_print_binary(va_list args)
{
	unsigned int num;
	char binary[33]; /* 32 bits + null terminator */
	int count, nChar = 0;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (count = 31; count >= 0; count--)
	{
		if ((num >> count) & count)
		{
			binary[nChar++] = '1';
		}
		else if (nChar > 0)
		{
			binary[nChar++] = '0';
		}
	}
	binary[nChar] = '\0';
	write(1, binary, nChar);
	return (nChar);
}
