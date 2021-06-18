#include <stdio.h>

/**
 * main - prints out all numbers under 10 without
 * using any char variables
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 50; n < 60; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
