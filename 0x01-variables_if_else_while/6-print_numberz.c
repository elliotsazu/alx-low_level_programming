#include <stdio.h>
/**
 * main - ptints all the single digit numbers
 * of base ten starting from zero, followed by
 * a new line using puctchar
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
