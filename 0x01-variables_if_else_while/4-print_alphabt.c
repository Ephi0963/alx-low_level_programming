#include<stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	char sigma;

	sigma = 'a';
		while (sigma <= 'z')
		{
			if (sigma == 'e')
			{
				continue;
			}
			if (sigma == 'q')
			{
				continue;
			}
			putchar(sigma);
		}
		putchar('\n');
		return (0);
}

