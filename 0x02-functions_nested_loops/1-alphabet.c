#include "_putchar.c"
/**
 *print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
