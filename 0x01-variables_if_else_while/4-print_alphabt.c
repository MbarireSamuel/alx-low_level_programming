#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char s;

	s = 'a';
	while
		(s <= 'z') {
			if ((s != 'q' && s != 'e') && s <= 'z')
				putchar(s);
			s++;
		}
	putchar('\n');
	return (0);
}
