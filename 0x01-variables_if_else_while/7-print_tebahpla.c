#include <stdio.h>

/**
 * main - main function
 *
 * Return: zero
 */

int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
		putchar(chr);
	putchar('\n');
	return (0);
}
