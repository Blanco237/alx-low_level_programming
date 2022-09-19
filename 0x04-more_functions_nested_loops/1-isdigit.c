#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: number to check
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
