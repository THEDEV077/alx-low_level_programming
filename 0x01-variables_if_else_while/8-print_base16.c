#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (n = 0; n <= 9; n++)
	{
		putchar(n + 65);
	}
	putchar('\n');
	return (0);
}
