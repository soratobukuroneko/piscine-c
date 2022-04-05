#include <assert.h>

char* ft_strcpy(char*, char*);

int main(void)
{
	char src[] = "This is a test string.";
	char dst[sizeof src];

	char* res = ft_strcpy(dst, src);
	assert(res == dst);
	for (unsigned long i = 0; i < sizeof src; i++)
	{
		assert(src[i] == dst[i]);
	}

	return 0;
}
