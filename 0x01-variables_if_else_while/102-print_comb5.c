#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	int i, j, a, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					if ((i+j) != (a+b) && (i+j) < (a+b))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(a);
						putchar(b);

						if ((i+j) < 'q' && (a+b) <= 'r')
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
