#include<stdio.h>

/**
 * main - prints the alphabet in lower case 
 * then in upper case, followed by 
 * a new line 
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	       putchar (ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}	
