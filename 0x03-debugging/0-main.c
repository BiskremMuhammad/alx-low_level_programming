#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	printf(positive_or_negative(i) == 0 ? "0 is zero\n" : "");

	return (0);
}
