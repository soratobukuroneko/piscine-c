#include <assert.h>

int ft_is_prime(int);

int main(void)
{
	assert(!ft_is_prime(0));
	assert(!ft_is_prime(1));
	assert(ft_is_prime(2));
	assert(ft_is_prime(3));
	assert(ft_is_prime(97));
	assert(!ft_is_prime(-3));
	assert(!ft_is_prime(-5));
	return 0;
}
