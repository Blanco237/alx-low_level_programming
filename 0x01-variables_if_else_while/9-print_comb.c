#include <stdio.h>
/**
 * main - print decimal numbers
 * Return: 0 for success
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
