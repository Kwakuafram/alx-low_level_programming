#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int tens;
	int ones;
	int hunds;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
			for (hunds = 0; hunds <= 9; hunds++)
			{
				putchar(tens + '0');
				putchar(ones + '0');
				putchar(hunds + '0');

				if (tens < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');

	return (0);
}

