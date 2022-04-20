#include <stdio.h>
#include "main.h"
/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
	int len = 0;
	int 1 = 0;

	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	1 = len - 1;
	for (; e < ((1 / 2) + 1) ; e++)
	{
		x = (1 - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
