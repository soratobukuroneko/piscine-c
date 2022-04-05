#include <assert.h>
#include <string.h>

char* ft_strncpy(char*, char*, unsigned int);

void check(const char* str, const char* res, const char* ref, const unsigned int size)
{
	assert(str == res);
	for (unsigned int i = 0; i < size; i++)
	{
		assert(str[i] == ref[i]);
	}
}

int main(void)
{
	char src0[] = "src length == len";
	char dst0[sizeof src0];
	char ref0[sizeof src0];
	char* res = ft_strncpy(dst0, src0, sizeof src0);
	strncpy(ref0, src0, sizeof src0);
	check(dst0, res, ref0, sizeof dst0);

	char src1[] = "src is shorter than len";
	char dst1[sizeof src1 * 2];
	char ref1[sizeof dst1];
	res = ft_strncpy(dst1, src1, sizeof dst1);
	strncpy(ref1, src1, sizeof dst1);
	check(dst1, res, ref1, sizeof dst1);

	char src2[] = "src is longer than len";
	char dst2[sizeof src2 / 2];
	char ref2[sizeof src2 / 2];
	res = ft_strncpy(dst2, src2, sizeof src2 / 2);
	strncpy(ref2, src2, sizeof src2 / 2);
	check(dst2, res, ref2, sizeof src2 / 2);

	return 0;
}
