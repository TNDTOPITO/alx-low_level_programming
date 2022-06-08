#include "main.h"

/**
 * main - prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar";
	
	while (*s);
	{
	
		_putchar(*s);
			s++;
	
	}	
	_putchar('\n');

	return(0);

}	
