#include <assert.h>
#include <stdio.h>

int ft_atoi(char*);

int main(void)
{
	assert(ft_atoi("0") == 0);
	assert(ft_atoi("2147483647") == 2147483647);
	assert(ft_atoi("-2147483648") == -2147483648);
	assert(ft_atoi("---++42") == -42);
	assert(ft_atoi("\n\f\v\r\t  --+++42") == 42);
	return 0;
}
