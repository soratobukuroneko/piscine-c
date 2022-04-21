#include <assert.h>
#include <limits.h>

int ft_iterative_power(int, int);

int main(void)
{
	assert(ft_iterative_power(INT_MAX, 0) == 1);
	assert(ft_iterative_power(INT_MIN, 1) == INT_MIN);
	assert(ft_iterative_power(4, 2) == 16);
	assert(ft_iterative_power(2, 10) == 1024);
	assert(ft_iterative_power(42, -1) == 0);
}
