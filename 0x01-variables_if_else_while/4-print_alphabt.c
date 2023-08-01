#include <stdio.h>
/**
 * main - Entry point
 * description : prints the alphabet in lowercase
 * return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 133 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
