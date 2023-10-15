#include "main.h"

/**
 * ft_strlen - get the length of str
 * @str: string
 * Return: string's length
*/
int ft_strlen(char *str)
{
	/* base case */
	if (*str == '\0')
		return (0);

	return (ft_strlen(str + 1) + 1);
}

/**
 * ft_putnbrs - prints an integer
 * @n: number to print
 * Return: number of printed char
 */
int ft_putnbrs(int n)
{
	int temp, index;
	int numChars = 0;
	char buffer[12];

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
