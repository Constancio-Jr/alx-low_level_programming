#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 lines
 */

void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten < 10; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
