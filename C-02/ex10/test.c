#include <assert.h>
#include <string.h>

unsigned int ft_strlcpy(char*, char*, unsigned int);

int main(void)
{
	char str0[] = "This is a test string";
	char buf[42];
	char ref[42];

	assert(ft_strlcpy(buf, str0, 42) == strlcpy(ref, str0, 42));
	assert(strcmp(buf, ref) == 0);

	assert(ft_strlcpy(buf, str0, 5) == strlcpy(ref, str0, 5));
	assert(strcmp(buf, ref) == 0);

	return 0;
}
