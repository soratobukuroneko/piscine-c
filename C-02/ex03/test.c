#include <assert.h>

int ft_str_is_numeric(char*);

int main(void)
{
	assert(ft_str_is_numeric("1234567890") == 1);
	assert(ft_str_is_numeric("120355/") == 0);
	assert(ft_str_is_numeric(":234") == 0);
	assert(ft_str_is_numeric("") == 1);

	return 0;
}
