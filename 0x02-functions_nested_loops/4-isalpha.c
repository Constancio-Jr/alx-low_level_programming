#include "main.h"
/**
 * _isalpha - check if the character is lower or uppercase
 * @c: the character
 * Return: 1 if the character is lower or uperrcase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
