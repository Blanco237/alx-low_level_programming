#include <stdio.h>
#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit of number
 * @n: number to get the last digit from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n % 10);
	printf("%d", last);
	return (last);
}
