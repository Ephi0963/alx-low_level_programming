#include<stdio.h>
#include<stdlib.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
		putchar(alpha);
		putchar('\n');
		alpha++;
	return (0);
}
