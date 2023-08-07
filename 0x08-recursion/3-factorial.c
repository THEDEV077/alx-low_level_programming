#include "main.h"
/**
 * factorial - function that returns the factorial
 * @n : factorial
 * return : factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
