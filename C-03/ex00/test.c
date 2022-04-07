#include <assert.h>

int ft_strcmp(char*, char*);

int main(void)
{
	assert(ft_strcmp("abcd", "abcd") == 0);
	assert(ft_strcmp("abc", "abcd") < 0);
	assert(ft_strcmp("abcd", "abc") > 0);
	assert(ft_strcmp("\200", "") > 0);
	return 0;
}
