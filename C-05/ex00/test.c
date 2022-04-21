#include <assert.h>

int ft_iterative_factorial(int);

int main(void)
{
	assert(ft_iterative_factorial(-42) == 0);
	assert(ft_iterative_factorial(0) == 1);
	assert(ft_iterative_factorial(1) == 1);
	assert(ft_iterative_factorial(2) == 2);
	assert(ft_iterative_factorial(6) == 720);
	assert(ft_iterative_factorial(10) == 3628800);
	return 0;
}
