#include "main.h"

/**
 * _isdigit - verifies if is a digit
 * @c: the character
 * Return: 1 if is digit 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
