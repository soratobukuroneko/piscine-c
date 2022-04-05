#include <assert.h>

int ft_str_is_alpha(char*);

int main(void)
{
	char str0[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZZabcdefghijklmnopqrtuvwxyz";
	assert(ft_str_is_alpha(str0) == 1);

	char str1[] = "abcdef[";
	assert(ft_str_is_alpha(str1) == 0);

	char str2[] = "abcde@yz";
	assert(ft_str_is_alpha(str2) == 0);

	char str3[] = "abcdeewa{";
	assert(ft_str_is_alpha(str3) == 0);

	return 0;
}
