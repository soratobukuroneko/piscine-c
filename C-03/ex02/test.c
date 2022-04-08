#include <assert.h>
#include <stdio.h>
#include <string.h>

char* ft_strcat(char*, char*);

int main(void)
{
	char str0[42] = "Hellow, Warld!";
	char *ptrstr0;
	char ref0[42] = "Hellow, Warld!";
	char str2[42] = "Moare Hellows!";

	ptrstr0 = ft_strcat(str0, str2);
	assert(ptrstr0 == str0);

	strcat(ref0, str2);
	assert(strcmp(str0, ref0) == 0);

	return 0;
}
