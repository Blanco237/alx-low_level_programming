#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, prod, p;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = (i * j);
			p = prod % 10;
			while (p)
			{
				_putchar('0' + p);
				prod = prod/10;
				p = prod % 10;
			}
			if (j == n)
				continue;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
