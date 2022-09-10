#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: 0 for success, 1 for failure
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
