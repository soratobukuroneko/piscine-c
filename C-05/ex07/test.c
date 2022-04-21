#include <assert.h>

int ft_find_next_prime(int);

int main(void)
{
	assert(ft_find_next_prime(0) == 2);
	assert(ft_find_next_prime(2) == 3);
	assert(ft_find_next_prime(90) == 97);
	return 0;
}
