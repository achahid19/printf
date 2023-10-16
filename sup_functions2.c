#include "main.h"

/**
 * ft_is_specifier - checks if c matches the available format specifiers
 * @c: character to check
 * Return: 1 if matches, otherwise 0.
*/
int ft_is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'b' || c == '%')
		return (1);
	return (0);
}
