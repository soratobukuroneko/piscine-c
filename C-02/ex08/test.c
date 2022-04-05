#include <assert.h>
#include <string.h>

char* ft_strlowcase(char*);

int main(void)
{
	char str[] = "This Is A Sample String!! 42";
	assert(strcmp(ft_strlowcase(str), "this is a sample string!! 42"));
	return 0;
}
