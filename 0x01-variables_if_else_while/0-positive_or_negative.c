#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints if the number is positive, negative, or 0
 * Return: Always 0
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive \n");
	}
	else if (n == 0)
	{
	printf("%d is zero \n");
	}
	else
	{
		printf("%d is negative \n");
	}

	return (0);
}