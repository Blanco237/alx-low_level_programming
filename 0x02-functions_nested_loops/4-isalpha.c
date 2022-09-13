#include "main.h"
/**
 * _isalpha - checks for lowercase character
 * @c: The number to be checked
 * Return: 1 for success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
