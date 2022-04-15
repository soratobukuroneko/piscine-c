#include <assert.h>

int ft_atoi_base(char*, char*);

int main(void)
{
	assert(ft_atoi_base("}{", "{}") == 2);
	assert(ft_atoi_base("10", "01") == 2);
	assert(ft_atoi_base("&&", "0123456789abcde&") == 0xff);
	assert(ft_atoi_base("100abcd", "0123456789")  == 100);
	assert(ft_atoi_base("a100", "01") == 0);
	assert(ft_atoi_base("abc", "ab+c") == 0);
	assert(ft_atoi_base("abc", "ab-c") == 0);
	assert(ft_atoi_base("aa", "a") == 0);
	assert(ft_atoi_base("abc", "") == 0);
	assert(ft_atoi_base("", "abc") == 0);
	assert(ft_atoi_base("-2147483648", "0123456789") == -2147483648);
	assert(ft_atoi_base("--2147483647", "0123456789") == 2147483647);

	return 0;
}
