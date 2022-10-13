#include "variadic_functions.h"
/**
 * sum_them_all - sums all the given arguments
 * @n: number of arguments
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
