#include "main.h"

/**
 * get_ft_spec - matches its format specifier with
 * the corresponding function
 * @c: format specifier
 * Return: number of printed character
*/
int (*get_ft_spec(char c))(va_list args)
{
	ft_spec st_list[] = {
		{'c', ft_putchar},
		{'s', ft_putstr},
		{'%', ft_putchar},
		{'i', ft_putnbr},
		{'d', ft_putnbr},
		{'b', ft_print_binary}
	};
	int count;

	for (count = 0; count < 6; count++)
	{
		if (st_list[count].c == c)
		{
			return (st_list[count].func);
		}
	}
	return (NULL);
}
