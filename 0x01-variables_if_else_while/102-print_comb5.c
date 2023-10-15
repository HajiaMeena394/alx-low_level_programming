#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;

	for (tho = 0; tho < 10; tho++)
	{
		for (hun = 0; hun < 10; hun++)
		{
			for (ten = 0; ten < 10; ten++)
			{
				for (bas = 0; bas < 10; bas++)
				{
					printf("%02d %02d, ", tho * 100 + hun * 10 + ten, ten * 10 + bas);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
