#include <stdio.h>

/**
*main - prints possible combinations of two digits.
*
*Return: 0
*/

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 1 ; b < 10 ; b++)
		{
			if (a < b && a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
