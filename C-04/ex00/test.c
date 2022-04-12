#include <assert.h>
#include <string.h>

int ft_strlen(char*);

int main(void)
{
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("\x01\xf0\xff") == strlen("\x01\xf0\xff"));
	assert(ft_strlen("abcd efg hij") == strlen("abcd efg hij"));
	return 0;
}
