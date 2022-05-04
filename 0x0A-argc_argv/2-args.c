#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int agrc, char **agrv)
{
	int i;

	if (agrc > 0)
	{
		for (i = 0; i < agrc; i++)
		{
			printf("%s\n", agrv[i]);
		}
	}
	return (0);
}

