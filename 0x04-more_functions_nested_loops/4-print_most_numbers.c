#include "main.h"
/**
 * print_most_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
 */
void print_most_numbers(void)
{
	char c;
	for (c = 48; c <= 57; c++)
	{
		if (c == 50)
		{
			continue;
			c++;
		}
		if (c == 52)
		{
			continue;
			c++;
		}
		putchar(c);
	}
	putchar('\n');
i	return (0);
}
