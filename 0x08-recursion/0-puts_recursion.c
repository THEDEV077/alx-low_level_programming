#include "main.h"
/**
 * _puts_recursion - recursive fonction to print on the screen
 * @s : 'pointer to the string'
 * return : nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
