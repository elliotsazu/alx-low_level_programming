#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints tha alphabet 
 * in lower case and 
 * Return:vAlways  0 (success)
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n);
	return (0);
}

