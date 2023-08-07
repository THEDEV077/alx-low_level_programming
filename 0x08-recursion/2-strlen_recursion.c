#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s :string
 * return : length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\n')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	return (0);
}
