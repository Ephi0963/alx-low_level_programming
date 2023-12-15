#include<stdio.h>
#include<stdlib.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	char beta;

	beta = 'a';
	while (beta <= 'z')
	{
		putchar(beta);
		beta++;
	}
	beta = 'A';
	while (beta <= 'Z')
	{
		putchar(beta);
		beta++;
	}

	return (0);
}
