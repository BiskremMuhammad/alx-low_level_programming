#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				if (i < '9' && j < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
