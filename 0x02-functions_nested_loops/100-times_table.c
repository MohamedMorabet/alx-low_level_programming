#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
				printf("%d", result);
			else
				printf(", %d", result);

			if (result < 10 && j != n)
				printf("   ");
			else if (result < 100 && j != n)
				printf("  ");
			else if (j != n)
				printf(" ");
		}
		printf("\n");
	}
}
