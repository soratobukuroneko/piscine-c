#include <assert.h>
#include <string.h>

unsigned int ft_strlcpy(char*, char*, unsigned int);

void zero(char* str, unsigned int len)
{
	for (unsigned int i = 0; i < len; i++)
		str[i] = '0';
}

int main(void)
{
	char str0[] = "This is a test string. 42 42.";
	char buf[42];
	char ref[42];

	assert(ft_strlcpy(buf, str0, 42) == strlcpy(ref, str0, 42));
	assert(strcmp(buf, ref) == 0);

	zero(buf, sizeof buf);
	zero(ref, sizeof ref);

	assert(ft_strlcpy(buf, str0, 15) == strlcpy(ref, str0, 15));
	assert(strcmp(buf, ref) == 0);

	return 0;
}
