#include<stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	int com;

	com = 0;
	while (com < 10)
	{
		putchar(com + '0');
		com++;
	}
	com = 0;
	while (com < 6)
	{
		putchar(com + 'a');
		com++;
	}
	putchar('\n');
	return (0);
}
