#include <assert.h>
#include <string.h>

char* ft_strlowcase(char*);

int main(void)
{
	char str0[] = "This Is A Sample String!! 42";
	char str1[] = "\tANOTHER Test String\n~";
	assert(strcmp(ft_strlowcase(str0), "this is a sample string!! 42") == 0);
	assert(strcmp(ft_strlowcase(str1), "\tanother test string\n~") == 0);
	return 0;
}
