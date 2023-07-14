#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: replies the main function
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		if (chr != 'e' && chr != 'q')
		putchar(chr);
	putchar('\n');
	return (0);
}
