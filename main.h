#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* prototypes functions to build _printf */
int ft_strlen(char *str);
int ft_putchar(va_list args);
int ft_putstr(va_list args);
int ft_putnbr(va_list args);
int (*get_ft_spec(char c))(va_list args);
int ft_print_binary(va_list args);
int ft_putnbrs(int n);
int ft_print_percent(va_list);
int ft_putch(char c);
int ft_is_specifier(char c);

/* Struct to get the corresponding format specifier and prints it */
/**
 * struct format_specifier - structure that gets the right format specifier "c"
 * and points to the function that prints c
 * @c: character that holds the format specifier
 * @func: pointer to the function that prints depending on c.
*/
typedef struct format_specifier
{
	char c;
	int (*func)(va_list args);
} ft_spec;

/* prototypes functions of _printf */
int _printf(const char *format, ...);

#endif /* MAIN_H */
