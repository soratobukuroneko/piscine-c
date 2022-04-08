#include <assert.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char*, char*, unsigned int);

int main(void)
{
	char dst[42] = "Hellow W0rld!\t";
	char ref[42] = "Hellow W0rld!\t";
	char src[] = "Moare words...";

	assert(ft_strlcat(dst, src, sizeof dst) == strlcat(ref, src, sizeof ref));
	assert(strcmp(dst, ref) == 0);

	assert(ft_strlcat(dst, src, 4) == strlcat(ref, src, 4));
	assert(strcmp(dst, ref) == 0);

	assert(ft_strlcat(dst, src, strlen(dst) + strlen(src) + 1));

	return 0;
}
