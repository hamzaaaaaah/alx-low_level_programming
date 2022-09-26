#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d, ", a[s]);
		if (s != n - 1)
			printf(", ");
	}

	printf("\n");
}
