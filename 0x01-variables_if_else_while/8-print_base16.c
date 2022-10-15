#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercas
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (ch = 'a'; ch <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
