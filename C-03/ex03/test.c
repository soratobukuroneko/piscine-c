#include <assert.h>
#include <string.h>

char* ft_strncat(char*, char*, unsigned int);

int main(void)
{
	char	dst[42] = "Hello, 42!\n";
	char	src[] = "How are you?";
	char	ref[42];
	strcpy(ref, dst);

	char* ptrdst = ft_strncat(dst, src, sizeof src - 1);
	assert(ptrdst == dst);
	strncat(ref, src, 12);
	assert(strcmp(dst, ref) == 0);

	ft_strncat(dst, src, 5);
	strncat(ref, src, 5);
	assert(strcmp(dst, ref) == 0);

	ft_strncat(dst, src, sizeof dst);
	strncat(ref, src, sizeof dst);
	assert(strcmp(dst, ref) == 0);

	return 0;
}
