#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fwdcounter = 0;
	int i;

	while (s[fwdcounter] != '\0')
		fwdcounter++;

	for (i = 0; i < fwdcounter; i++)
	{
		fwdcounter--;
		rev = s[i];
		s[i] = s[fwdcounter];
		s[fwdcounter] = rev;
	}
}
