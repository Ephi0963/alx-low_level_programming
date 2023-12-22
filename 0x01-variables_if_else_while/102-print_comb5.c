#include<stdio.h>
/**
 * main -main block
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)

			putchar(' ');
			for (k = 0; k <= 9; k++)
			{
				for (l = k + 1; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
