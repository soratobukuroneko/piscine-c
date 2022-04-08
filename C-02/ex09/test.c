#include <assert.h>
#include <string.h>

char* ft_strcapitalize(char*);

int main(void)
{
	char str0[] = "aBcd 42ABc}aa[vD@aa";
	char str1[] = "rEkt17+lOl mdr mdr 4242l42 XD";
	char str2[] = "d8@<sarae      kgomilmiz!_gvn2v!^{#dr";
	assert(strcmp(ft_strcapitalize(str0), "Abcd 42abc}Aa[Vd@Aa") == 0);
	assert(strcmp(ft_strcapitalize(str1), "Rekt17+Lol Mdr Mdr 4242l42 Xd") == 0);
	assert(strcmp(ft_strcapitalize(str2), "D8@<Sarae      Kgomilmiz!_Gvn2v!^{#Dr") == 0);
	return 0;
}
