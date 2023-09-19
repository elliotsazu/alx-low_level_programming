#include "main.h"

/**
 * _strlen - this always returns strings length
 * @s: string to be evaluated
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
