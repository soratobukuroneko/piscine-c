#include <assert.h>

int ft_str_is_uppercase(char*);

int main(void)
{
	assert(ft_str_is_uppercase("") == 1);
	assert(ft_str_is_uppercase("ABCDEFGIJKLMNOPQRSTUVWXYZ") == 1);
	assert(ft_str_is_uppercase("A@") == 0);
	assert(ft_str_is_uppercase("ASD[") == 0);

	return 0;
}
