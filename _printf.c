#include "main.h"

/**
 * _printf - function that produces output according to this format specifiers
 * %c, %s ,%%, %i and %d.
 * @format: a list of types passed to string format:
 * c: character
 * s: string
 * %: print modulo
 * %i, %d: integer
 * Return: Number of printed bytes exluding '\0', otherwise return 0.
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count;
	int (*func)(va_list);
	int len = 0;
	char error[] = "format error, length is zero.\n";

	if (format == NULL || format[0] == '\0')
	{
		write(STDERR_FILENO, error, ft_strlen(error));
		return (0);
	}
	va_start(args, format);
	for (count = 0; format[count]; count++)
	{
		if (format[count] == '%')
		{
			count++;
			len -= 2;
			if (format[count] == '%')
			{
				len += ft_putch('%');
				continue;
			}
			func = get_ft_spec(format[count]);
			len += (*func)(args);
		}
		else
			write(1, &format[count], 1);
	}
	va_end(args);
	return (count + len);
}
