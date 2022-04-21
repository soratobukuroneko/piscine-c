#include <assert.h>
#include <limits.h>

int ft_fibonacci(int);

int main(void)
{
	assert(ft_fibonacci(-1) == -1);
	assert(ft_fibonacci(INT_MIN) == -1);
	assert(ft_fibonacci(0) == 0);
	assert(ft_fibonacci(1) == 1);
	assert(ft_fibonacci(2) == 1);
	assert(ft_fibonacci(20) == 6765);
}
