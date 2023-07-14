#include <stdio.h>

/**
 * main - main function
 *
 * Return: zero
 */

int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
		putchar(nm + '0');
	putchar('\n');
	return (0);
}
