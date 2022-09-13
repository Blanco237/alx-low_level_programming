#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The number to be checked
 * Return: 1 for success, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
