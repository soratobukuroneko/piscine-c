#include <assert.h>
#include <string.h>

char* ft_strstr(char*, char*);

int main(void)
{
	char haystack[] = "Hello world! 42 is fun, 42 is amazing, go 42!";

	assert(ft_strstr(haystack, "") == strstr(haystack, ""));
	assert(ft_strstr(haystack, "42 is amazing") == strstr(haystack, "42 is amazing"));
	assert(ft_strstr(haystack, "not found") == strstr(haystack, "not found"));

	return 0;
}
