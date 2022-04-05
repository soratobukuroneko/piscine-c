#include <assert.h>

int ft_str_is_alpha(char*);

int main(void)
{
	assert(ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZZabcdefghijklmnopqrtuvwxyz") == 1);
	assert(ft_str_is_alpha("abcdef[") == 0);
	assert(ft_str_is_alpha("ad@s") == 0);
	assert(ft_str_is_alpha("{a{sdw") == 0);
	assert(ft_str_is_alpha("") == 1);

	return 0;
}
