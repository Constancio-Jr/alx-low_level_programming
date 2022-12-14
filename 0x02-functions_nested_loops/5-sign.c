#include "main.h"
/**
 * print_sign - checks if the number is greeater, equal or lower than zero
 * @n: The variable that will make the check
 * Return: 1 if is greater, 0  if is zero and -1 if is lower
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
