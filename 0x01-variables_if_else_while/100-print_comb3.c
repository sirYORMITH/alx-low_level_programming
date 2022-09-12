#include <stdio.h>

/**
 *main - print numbers from 00 - 99
 *Return:0 success
 *
 */

int main(void)
{
	int i;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = (n + 1); i <= '9'; i++)
		{
			putchar(n);
			putchar(i);

			if (n != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
