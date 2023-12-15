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
				sigma++;
				continue;
			}
			if (sigma == 'q')
			{
				sigma++;
				continue;
			}
			putchar(sigma);
			sigma++;
		}
		putchar('\n');
		return (0);
}

