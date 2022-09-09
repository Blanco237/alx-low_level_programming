#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
