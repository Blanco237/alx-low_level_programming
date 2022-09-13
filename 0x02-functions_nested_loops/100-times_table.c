#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = (i * j);
			if (j == n)
			{
				printf("%4d", prod);
				continue;
			}
			if (i == 0 && j == 0)
			{
				printf("%d,", prod);
				continue;
			}
			printf("%3d,", prod);
		}
		printf("\n");
	}
}
