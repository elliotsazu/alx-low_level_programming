#include <unistd.h>

/**
 * _putchar: writes the character C to stdout
 * @c: the character to print
 *
 * Return: on Success 1.
 * on error: -1 is returned and errno is set 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));;
}
