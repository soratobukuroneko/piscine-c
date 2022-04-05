#include <assert.h>

int ft_str_is_lowercase(char*);

int main(void)
{
	assert(ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz") == 1);
	assert(ft_str_is_lowercase("Abcde") == 0);
	assert(ft_str_is_lowercase("ab`vde") == 0);
	assert(ft_str_is_lowercase("abcde{") == 0);
	assert(ft_str_is_lowercase("") == 1);

	return 0;
}
