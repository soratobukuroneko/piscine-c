#include <assert.h>
#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
	assert(ft_strlen("1234") == 4);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("1") == 1);
	assert(ft_strlen("1234567890") == 10);
}
