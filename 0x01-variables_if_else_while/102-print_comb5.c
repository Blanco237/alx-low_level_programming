#include <stdio.h>
/**
 * main - print two digit combinations
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58 ; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
