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
	char str2[] = "AAA\x01\x01 AAA";

	assert(ft_strncmp(str0, str1, 5) == 0);
	assert(ft_strncmp(str0, str1, sizeof str0) < 0);
	assert(ft_strncmp(str0, str2, sizeof str0 - 1) > 0);

	return 0;
}

