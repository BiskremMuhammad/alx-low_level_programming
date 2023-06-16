#include <stdio.h>

void printQuote(void);
void printAutor(void);

/**
 * main - Program Entry Point
 *
 * Return: 1 indication of success, doesn't mean anything
 */
int main(void)
{
	printQuote();
	putchar(' ');
	putchar('-');
	putchar(' ');
	printAuthor();
	putchar('\n');

	return (1);
}

/**
 * printQuote - to print the quote part
 */
void printQuote(void)
{
	putchar('a');
        putchar('n');
        putchar('d');
        putchar(' ');
        putchar('t');
        putchar('h');
        putchar('a');
        putchar('t');
        putchar(' ');
        putchar('p');
        putchar('i');
        putchar('e');
        putchar('c');
        putchar('e');
        putchar(' ');
        putchar('o');
        putchar('f');
        putchar(' ');
        putchar('a');
        putchar('r');
        putchar('t');
        putchar(' ');
        putchar('i');
        putchar('s');
        putchar(' ');
        putchar('u');
        putchar('s');
        putchar('e');
        putchar('f');
        putchar('u');
        putchar('l');
        putchar('"');
}

/**
 * printAuthor - to print the saying author
 */
void printAuthor(void)
{
	putchar('D');
        putchar('o');
        putchar('r');
        putchar('a');
        putchar(' ');
        putchar('K');
        putchar('o');
        putchar('r');
        putchar('p');
        putchar('a');
        putchar('r');
        putchar(',');
        putchar(' ');
        putchar('2');
        putchar('0');
        putchar('1');
        putchar('5');
        putchar('-');
        putchar('1');
        putchar('0');
        putchar('-');
        putchar('1');
        putchar('9');
}
