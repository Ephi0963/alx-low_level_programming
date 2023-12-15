#include<stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	int elff;

	elff = 'z';
	while (elff >= 'a')
	{
		putchar(elff);
		elff--;
	}
	putchar('\n');
	return (0);
}

