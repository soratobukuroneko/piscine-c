#include <assert.h>
#include <limits.h>
#include <stdio.h>

int ft_sqrt(int);

int main(void)
{
	assert(ft_sqrt(0) == 0);
	assert(ft_sqrt(1) == 1);
	assert(ft_sqrt(-1) == 0);
	assert(ft_sqrt(INT_MIN) == 0);
	assert(ft_sqrt(64 * 64) == 64);
	assert(ft_sqrt(128 * 128) == 128);
	assert(ft_sqrt(2) == 0);
	return 0;
}
