#include <stdio.h>

/**
 * compareAndPrint - To Compare values and Print
 * @i: number #1 tens multiplcation
 * @j: number #1 under 10 digit
 * @a: number #2 tens multiplcation
 * @b: number #2 under 10 digit
 */
void compareAndPrint(int i, int j, int a, int b)
{
	int ij, ab;

	ij = (10 * i) + j;
	ab = (10 * a) + b;
	if (ab > ij)
	{
		putchar(i);
		putchar(j);
		putchar(' ');
		putchar(a);
		putchar(b);

		if (i <= '9' && j < '9' && a <= '9' && b <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
}

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
					compareAndPrint(i, j, a, b);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
