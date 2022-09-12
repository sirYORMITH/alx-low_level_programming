#include <stdio.h>

/**
 *main - print alphabets in lowercase except q and e
 *Return:0 success
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if ((letters != 'q') && (letters != 'e'))
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');

		return (0);
}
