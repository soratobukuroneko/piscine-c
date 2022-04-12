#include <assert.h>
#include <string.h>

int ft_strncmp(char*, char*, unsigned int);

void zero(char* str, unsigned int len)
{
	for (unsigned int i = 0; i < len; i++)
		str[i] = 0;
}

int main(void)
{
	char str0[] = "AAA\x01\x01 BBB";
	char str1[] = "AAA\x01\x01 BCD";
	char str2[] = "AAA\xf0\x01 AAA";
	char str3[] = "A";
	char str4[] = "";

	assert(ft_strncmp(str0, str1, 5) == strncmp(str0, str1, 5));
	assert(ft_strncmp(str0, str1, sizeof str0)
			== strncmp(str0, str1, sizeof str0));
	assert(ft_strncmp(str0, str2, sizeof str0 - 1)
			== strncmp(str0, str2, sizeof str0 - 1));
	assert(ft_strncmp(str0, str1, 0) == strncmp(str0, str1, 0));
	assert(ft_strncmp(str0, str3, 2) == strncmp(str0, str3, 2));
	assert(ft_strncmp(str3, str0, sizeof str0) == strncmp(str3, str0, sizeof str0));
	assert(ft_strncmp(str4, str0, sizeof str0) == strncmp(str4, str0, sizeof str0));
	assert(ft_strncmp(str0, str4, sizeof str0) == strncmp(str0, str4, sizeof str0));

	return 0;
}

