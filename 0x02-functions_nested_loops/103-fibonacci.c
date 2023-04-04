#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)

{

	int i = 0;
	long j = l, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 ==0)
	sum += k;
	j = k - j;
	++i;
	}
	prinf("%d\n", sum);
	return (0);
}
