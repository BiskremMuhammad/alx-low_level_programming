#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	int i, j, a, b, ij, ab;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					ij = (10 * i) + j;
					ab = (10 * a) + b;
					if ((i + j) != (a + b) && ab > ij)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(a);
						putchar(b);

						if ((i + j) < 'q' && (a + b) <= 'r')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
