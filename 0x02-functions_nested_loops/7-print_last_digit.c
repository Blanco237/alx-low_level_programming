#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: number to get the last digit from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last);
	return (last);
}
