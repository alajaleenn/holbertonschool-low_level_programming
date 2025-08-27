#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 26; a++)
		putchar(97 + a);
	for (a = 0; a < 26; a++)
		putchar(65 + a);
	putchar('\n');
	return (0);
}