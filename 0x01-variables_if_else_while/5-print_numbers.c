#include <stdio.h>
/**
 * main - Entry point
 * description: 'prints all single digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	return (0);
}
