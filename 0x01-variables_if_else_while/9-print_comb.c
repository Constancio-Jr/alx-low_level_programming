#include <stdio.h>

/**
 * main - prints al combinatons of digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		printchar ('\n');
		return (0);
	}
}
