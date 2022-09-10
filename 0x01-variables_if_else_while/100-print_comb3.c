#include <stdio.h>
/**
 * main - print two digit combinations
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57 ; i++)
	{
		for (j = (i + 1); j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
