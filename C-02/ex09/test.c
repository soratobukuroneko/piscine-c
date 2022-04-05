#include <assert.h>
#include <string.h>

char* ft_strcapitalize(char*);

int main(void)
{
	char str[] = "aBcd 42ABc}aa[vD@aa";
	assert(strcmp(ft_strcapitalize(str), "Abcd 42abc}Aa[Vd@Aa") == 0);
	return 0;
}
