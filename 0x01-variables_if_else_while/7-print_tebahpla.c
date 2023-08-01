#include <stdio.h>
/**
 * main - Entry point
 * Description:'prints the lowercase alphabet in reverse'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 25; n >= 0; n--)
	{
		putchar(n + 97);
	}
	putchar('\n');
	return (0);

}
