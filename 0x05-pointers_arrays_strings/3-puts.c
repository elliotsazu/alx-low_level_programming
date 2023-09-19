#include "main.h"

/**
 * _puts - a function tha prints a string
 * @str: function parameter
 * followed by a new line
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar (str[i]);
	}
	putchar ('\n');
}
