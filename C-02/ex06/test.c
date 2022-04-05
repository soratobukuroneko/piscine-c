#include <assert.h>
#include <stdio.h>

int ft_str_is_printable(char*);

int main(void)
{
	char str[] = " ";
	for (char c = ' '; c < 127; c++)
	{
		str[0] = c;
		assert(ft_str_is_printable(str) == 1);
	}
	for (char c = ' ' - 1; c > 0; c--)
	{
		str[0] = c;
		assert(ft_str_is_printable(str) == 0);
	}
	str[0] = 127;
	assert(ft_str_is_printable(str) == 0);

	return 0;
}
