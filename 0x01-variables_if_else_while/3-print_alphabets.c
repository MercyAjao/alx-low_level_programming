#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: replies the main function
 */

int main(void)
{
	char chr;
	char ab;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	for (ab = 'A'; ab <= 'Z'; ab++)
		putchar(ab);
	putchar('\n');
	return (0);
}
