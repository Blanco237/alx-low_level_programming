#include <stdio.h>
/**
 * main - print two digit combinations
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56 ; i++)
	{
		for (j = (i + 1); j < 57; j++)
		{
			for (k = (j + 1); k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
