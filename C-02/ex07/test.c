#include <assert.h>
#include <string.h>
#include <stdio.h>

char* ft_strupcase(char*);

int main(void)
{
	char str0[] = "Just a test string. 0123!";
	assert(strcmp(ft_strupcase(str0), "JUST A TEST STRING. 0123!") == 0);

	return 0;
}
